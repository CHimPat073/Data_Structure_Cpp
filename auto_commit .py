"""
Auto-Commit & Push Script for DSA Repository
=============================================

This script monitors the repository directory for `.exe` file creation or
modification events. When a new/modified `.exe` is detected, it:

  1. Finds the corresponding `.cpp` source file (same name, same directory).
  2. Stages the `.cpp` file with `git add`.
  3. Generates a meaningful commit message from the file's path
     (e.g., "Add Array/LEETCODE: 4Sum").
  4. Commits and pushes to `origin main`.

Usage:
    python auto_commit.py

    Press Ctrl+C to stop the watcher gracefully.

Requirements:
    - `watchdog` (pip install watchdog)  — already installed
    - Git configured with remote `origin` pointing to your GitHub repo.
    - Python 3.8+ (uses typing.Dict for compatibility).

CHANGES FROM ORIGINAL:
  - Fixed cooldown bug: the cooldown timer no longer starts on events that
    get skipped (e.g. file too small mid-write). Previously a partial write
    event would "use up" the cooldown window and cause the real completion
    event a moment later to be silently dropped.
  - Switched dict[str, float] -> typing.Dict[str, float] for Python 3.8
    compatibility (the bare generic syntax requires 3.9+).
  - Added a DEBUG flag that prints the exact exe path, expected cpp path,
    and git stderr on every failure, so you can see *why* something was
    skipped instead of guessing.
  - Added preflight_checks(): verifies git repo, origin remote,
    user.name/user.email, and push auth (via --dry-run) BEFORE the watcher
    starts, so config/auth problems show up immediately instead of only
    after you compile something.
  - Push failures now print the full git stderr (auth errors, no upstream,
    etc.) instead of just a generic message.
"""

from __future__ import annotations

import os
import sys
import time
import subprocess
from datetime import datetime
from pathlib import Path
from typing import Dict

from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler

# ── Debug mode: set True to see verbose diagnostics ────────────────────────
DEBUG = True

# ── ANSI Color Codes ────────────────────────────────────────────────────────

GREEN = "\033[92m"
YELLOW = "\033[93m"
RED = "\033[91m"
CYAN = "\033[96m"
MAGENTA = "\033[95m"
BOLD = "\033[1m"
RESET = "\033[0m"

# ── Repository Root ─────────────────────────────────────────────────────────

REPO_DIR = os.path.dirname(os.path.abspath(__file__))

# ── Cooldown (seconds) ─────────────────────────────────────────────────────

COOLDOWN_SECONDS = 5

# ── Minimum file size (bytes) ───────────────────────────────────────────────

MIN_FILE_SIZE = 1024  # 1KB — skip incomplete/corrupted .exe files

# ── Push retry configuration ────────────────────────────────────────────────

MAX_PUSH_RETRIES = 3
RETRY_DELAY = 2  # seconds


def timestamp() -> str:
    """Return a formatted timestamp string for console logging."""
    return datetime.now().strftime("%H:%M:%S")


def log_info(msg: str) -> None:
    print(f"  {CYAN}[{timestamp()}]{RESET}  {msg}")


def log_success(msg: str) -> None:
    print(f"  {GREEN}[{timestamp()}]  \u2714  {msg}{RESET}")


def log_skip(msg: str) -> None:
    print(f"  {YELLOW}[{timestamp()}]  \u23ed  {msg}{RESET}")


def log_error(msg: str) -> None:
    print(f"  {RED}[{timestamp()}]  \u2716  {msg}{RESET}")


def log_debug(msg: str) -> None:
    if DEBUG:
        print(f"  {MAGENTA}[{timestamp()}]  \u2699 DEBUG: {msg}{RESET}")


def run_git(*args: str) -> subprocess.CompletedProcess:
    """
    Run a git command inside the repo directory.
    Returns the CompletedProcess; the caller decides how to handle errors.
    """
    return subprocess.run(
        ["git", *args],
        cwd=REPO_DIR,
        capture_output=True,
        text=True,
    )


def is_file_tracked(rel_path: str) -> bool:
    """Return True if the file already has at least one commit in the log."""
    result = run_git("log", "--oneline", "--", rel_path)
    return bool(result.stdout.strip())


def build_commit_message(rel_path: str) -> str:
    """
    Build a human-readable commit message from the relative .cpp path.

    Examples:
        Array/LEETCODE/4Sum.cpp      →  Add Array/LEETCODE: 4Sum
        Graphs/BASICS/BFS.cpp        →  Add Graphs/BASICS: BFS
        LinkedList/BASICS/ll2.cpp    →  Add LinkedList/BASICS: ll2
        hashCode.cpp                 →  Add hashCode
    """
    # Normalise to forward slashes for consistency
    rel_path = rel_path.replace("\\", "/")
    parts = Path(rel_path).parts  # e.g. ('Array', 'LEETCODE', '4Sum.cpp')

    # Determine Add vs Update
    verb = "Update" if is_file_tracked(rel_path) else "Add"

    problem_name = Path(parts[-1]).stem  # filename without extension

    if len(parts) >= 3:
        # e.g. Array/LEETCODE/4Sum.cpp → "Array/LEETCODE: 4Sum"
        prefix = "/".join(parts[:-1])
        return f"{verb} {prefix}: {problem_name}"
    elif len(parts) == 2:
        # e.g. LinkedList/ll2.cpp → "LinkedList: ll2"
        return f"{verb} {parts[0]}: {problem_name}"
    else:
        # Root-level file
        return f"{verb} {problem_name}"


def push_with_retry() -> bool:
    """
    Attempt to push to origin/main up to MAX_PUSH_RETRIES times.
    Returns True if successful, False otherwise.
    """
    for attempt in range(1, MAX_PUSH_RETRIES + 1):
        try:
            result = run_git("push", "origin", "main")
            if result.returncode == 0:
                log_success("Pushed to origin/main  \U0001f680")
                return True
            else:
                stderr = result.stderr.strip()
                if attempt < MAX_PUSH_RETRIES:
                    log_skip(
                        f"Push attempt {attempt}/{MAX_PUSH_RETRIES} failed "
                        f"— retrying in {RETRY_DELAY}s"
                    )
                    log_debug(f"git push stderr: {stderr}")
                    time.sleep(RETRY_DELAY)
                else:
                    log_error(f"Push failed after {MAX_PUSH_RETRIES} attempts")
                    log_error(f"git stderr: {stderr}")
        except Exception as exc:
            if attempt < MAX_PUSH_RETRIES:
                log_skip(
                    f"Push attempt {attempt}/{MAX_PUSH_RETRIES} error "
                    f"— retrying in {RETRY_DELAY}s: {exc}"
                )
                time.sleep(RETRY_DELAY)
            else:
                log_error(f"Push failed after {MAX_PUSH_RETRIES} attempts: {exc}")

    log_error("All push attempts failed (changes are committed locally only)")
    return False


class ExeEventHandler(FileSystemEventHandler):
    """Watches for .exe creation / modification and auto-commits the .cpp."""

    def __init__(self) -> None:
        super().__init__()
        # {absolute_exe_path: last_PROCESSED_timestamp}
        self._cooldowns: Dict[str, float] = {}

    # ── Event Callbacks ─────────────────────────────────────────────────

    def on_created(self, event):
        if not event.is_directory:
            self._handle(event.src_path)

    def on_modified(self, event):
        if not event.is_directory:
            self._handle(event.src_path)

    # ── Core Logic ──────────────────────────────────────────────────────

    def _handle(self, exe_path: str) -> None:
        # Only care about .exe files
        if not exe_path.lower().endswith(".exe"):
            return

        abs_exe = os.path.abspath(exe_path)

        # ── Cooldown check ──────────────────────────────────────────────
        # NOTE: we only *read* the cooldown here. We do NOT set it until
        # we know we're actually going to attempt a commit. This prevents
        # a partial/incomplete write event from "eating" the cooldown
        # window and causing the real completion event to be dropped.
        now = time.time()
        last = self._cooldowns.get(abs_exe, 0)
        if now - last < COOLDOWN_SECONDS:
            log_skip(f"Cooldown active — skipping {os.path.basename(abs_exe)}")
            return

        # ── File size validation ────────────────────────────────────────
        try:
            file_size = os.path.getsize(abs_exe)
            if file_size < MIN_FILE_SIZE:
                log_skip(
                    f"File too small ({file_size} bytes, min {MIN_FILE_SIZE}) "
                    f"— likely still being written, will retry on next event"
                )
                return
        except Exception as exc:
            log_error(f"Could not get file size: {exc}")
            return

        # ── Find corresponding .cpp ─────────────────────────────────────
        cpp_path = os.path.splitext(abs_exe)[0] + ".cpp"
        rel_exe = os.path.relpath(abs_exe, REPO_DIR).replace("\\", "/")

        log_info(f"Detected .exe → {BOLD}{rel_exe}{RESET}")
        log_debug(f"abs_exe  = {abs_exe}")
        log_debug(f"cpp_path = {cpp_path}")

        if not os.path.isfile(cpp_path):
            log_skip(
                f"No matching .cpp found at expected path — skipping. "
                f"Make sure your compiled .exe has the SAME name as the "
                f".cpp file and sits in the SAME folder "
                f"(e.g. 4Sum.cpp -> 4Sum.exe, not a.exe/main.exe)."
            )
            return

        # Only NOW do we start the cooldown — we're committed to processing.
        self._cooldowns[abs_exe] = now

        rel_cpp = os.path.relpath(cpp_path, REPO_DIR).replace("\\", "/")
        log_info(f"Found source   → {BOLD}{rel_cpp}{RESET}")

        # ── git add ─────────────────────────────────────────────────────
        try:
            result = run_git("add", rel_cpp)
            if result.returncode != 0:
                log_error(f"git add failed: {result.stderr.strip()}")
                return
        except Exception as exc:
            log_error(f"git add error: {exc}")
            return

        # ── Check for staged changes ───────────────────────────────────
        try:
            diff = run_git("diff", "--cached", "--name-only")
            if not diff.stdout.strip():
                log_skip("No staged changes — nothing to commit (file identical to last commit)")
                return
        except Exception as exc:
            log_error(f"git diff error: {exc}")
            return

        # ── Commit ──────────────────────────────────────────────────────
        message = build_commit_message(rel_cpp)

        try:
            result = run_git("commit", "-m", message)
            if result.returncode != 0:
                log_error(f"git commit failed: {result.stderr.strip()}")
                log_debug(
                    "If this mentions user.name/user.email, run: "
                    "git config user.name \"Your Name\" && "
                    "git config user.email \"you@example.com\""
                )
                return
            log_success(f"Committed → {BOLD}{message}{RESET}")
        except Exception as exc:
            log_error(f"git commit error: {exc}")
            return

        # ── Push with retry ─────────────────────────────────────────────
        push_with_retry()


def print_banner() -> None:
    """Print a startup banner with repo info."""
    banner = f"""
{CYAN}{BOLD}\u2554\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2557
\u2551          \U0001f504  DSA Auto-Commit Watcher  \U0001f504             \u2551
\u255a\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u255d{RESET}

  {CYAN}Repo :{RESET}  {BOLD}{REPO_DIR}{RESET}
  {CYAN}Watch:{RESET}  Recursive — all subdirectories
  {CYAN}For  :{RESET}  .exe creation / modification → auto-commit .cpp
  {CYAN}Min  :{RESET}  File size {MIN_FILE_SIZE} bytes | Retries {MAX_PUSH_RETRIES}x
  {CYAN}Debug:{RESET}  {"ON — verbose diagnostics enabled" if DEBUG else "off"}

  {YELLOW}Press Ctrl+C to stop.{RESET}
"""
    print(banner)


def preflight_checks() -> bool:
    """Sanity-check the environment before starting the watcher."""
    ok = True

    # Python version check
    if sys.version_info < (3, 8):
        log_error(f"Python {sys.version.split()[0]} detected — please use Python 3.8+")
        ok = False

    # Is this a git repo?
    result = run_git("rev-parse", "--is-inside-work-tree")
    if result.returncode != 0:
        log_error(f"{REPO_DIR} is not a git repository (or git isn't on PATH)")
        ok = False
    else:
        log_debug("Git repo detected OK")

    # Is origin configured?
    result = run_git("remote", "get-url", "origin")
    if result.returncode != 0:
        log_error("No 'origin' remote configured — set one with: git remote add origin <url>")
        ok = False
    else:
        log_debug(f"origin = {result.stdout.strip()}")

    # Is user.name/user.email set?
    name = run_git("config", "user.name")
    email = run_git("config", "user.email")
    if not name.stdout.strip() or not email.stdout.strip():
        log_error(
            "git user.name / user.email not configured. Run:\n"
            '        git config user.name "Your Name"\n'
            '        git config user.email "you@example.com"'
        )
        ok = False

    # Can we push at all (auth check) — dry run
    result = run_git("push", "--dry-run", "origin", "main")
    if result.returncode != 0:
        log_error("git push --dry-run failed (likely an auth/credential issue):")
        log_error(result.stderr.strip())
        ok = False
    else:
        log_debug("Push auth check OK (dry run succeeded)")

    return ok


def main() -> None:
    print_banner()

    log_info("Running pre-flight checks…")
    if not preflight_checks():
        log_error(
            "Pre-flight checks failed — fix the issues above before the "
            "watcher can reliably auto-push. Starting anyway, but pushes "
            "will likely fail."
        )
    else:
        log_success("Pre-flight checks passed")
    print()

    event_handler = ExeEventHandler()
    observer = Observer()
    observer.schedule(event_handler, REPO_DIR, recursive=True)
    observer.start()

    log_info("Watcher started — waiting for .exe events …")
    print()

    try:
        while True:
            time.sleep(1)
    except KeyboardInterrupt:
        print()
        log_info("Shutting down watcher …")
        observer.stop()

    observer.join()
    log_success("Watcher stopped. Goodbye! \U0001f44b")


if __name__ == "__main__":
    main()