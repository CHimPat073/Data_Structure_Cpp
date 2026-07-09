# 🚀 A2Z Striver DSA - Data Structures & Algorithms

A comprehensive repository for mastering **Data Structures and Algorithms** following the A2Z Striver curriculum. This repo contains well-organized solutions, implementations, and practice problems.

---

## 📁 Repository Structure

```
A2Z Striver C++ DSA/
│
├── Data Structure and Algorithm/
│   ├── README.md                          # 📄 This file
│   ├── auto_commit.py                     # 🤖 Auto-commit watcher script
│   ├── .gitignore                         # Git ignore rules
│   ├── .vscode/                           # VS Code settings
│   │   └── settings.json
│   │
│   ├── STL/                               # 📚 Standard Template Library
│   │   ├── Vectors.cpp
│   │   ├── Maps.cpp
│   │   ├── Sets.cpp
│   │   ├── Queues.cpp
│   │   ├── Stacks.cpp
│   │   └── Algorithms.cpp
│   │
│   ├── Start Codes/                       # 🎯 Basic Starter Problems
│   │   ├── Array.cpp
│   │   ├── String.cpp
│   │   ├── Math.cpp
│   │   └── Logic.cpp
│   │
│   ├── Supreme/                           # 🏆 Advanced Sorting Algorithms
│   │   ├── QuickSort.cpp
│   │   ├── MergeSort.cpp
│   │   ├── HeapSort.cpp
│   │   ├── BubbleSort.cpp
│   │   ├── InsertionSort.cpp
│   │   ├── SelectionSort.cpp
│   │   └── CountingSort.cpp
│   │
│   └── [Other Folders - To be added]
│       ├── Arrays/
│       ├── LinkedList/
│       ├── Graphs/
│       ├── Trees/
│       ├── DynamicProgramming/
│       └── ...
│
└── .git/                                  # Git repository metadata
```

---

## 🗂️ Folder Descriptions

### **STL/** - Standard Template Library
Implementations and usage examples of C++ STL containers and algorithms.
- `Vectors.cpp` - Dynamic arrays
- `Maps.cpp` - Key-value pairs
- `Sets.cpp` - Unique elements
- `Queues.cpp` - FIFO data structure
- `Stacks.cpp` - LIFO data structure
- `Algorithms.cpp` - Common STL algorithms (sort, search, etc.)

### **Start Codes/** - Beginner Problems
Entry-level problems to strengthen fundamentals.
- `Array.cpp` - Array manipulation
- `String.cpp` - String operations
- `Math.cpp` - Mathematical problems
- `Logic.cpp` - Logic-based problems

### **Supreme/** - Sorting Algorithms
In-depth implementations of all major sorting techniques.
- `QuickSort.cpp` - Average O(n log n), divide & conquer
- `MergeSort.cpp` - O(n log n), stable sort
- `HeapSort.cpp` - O(n log n), heap-based
- `BubbleSort.cpp` - O(n²), comparison-based
- `InsertionSort.cpp` - O(n²), incremental
- `SelectionSort.cpp` - O(n²), selection-based
- `CountingSort.cpp` - O(n + k), non-comparison

---

## 🔧 Setup & Usage

### Prerequisites
- **C++ Compiler** (MinGW, MSVC, or Clang)
- **Git** (for version control)
- **Python 3.8+** (for auto-commit script)
- **watchdog** (Python library)

### Installation

1. **Clone the repository:**
   ```bash
   git clone https://github.com/CHimPat073/Sorting-Algo.git
   cd "A2Z Striver C++ DSA\Data Structure and Algorithm"
   ```

2. **Install Python dependencies:**
   ```bash
   pip install watchdog
   ```

3. **Compile C++ files:**
   ```bash
   g++ -o filename.exe filename.cpp
   ```

---

## 🤖 Auto-Commit Watcher

This repository includes an **auto-commit script** that automatically commits and pushes changes when you compile your code.

### How It Works
1. **Watches** for `.exe` file creation/modification
2. **Matches** the `.exe` with its corresponding `.cpp` source
3. **Auto-commits** with a smart, formatted message
4. **Pushes** to `origin/main` with retry logic

### Starting the Watcher

```bash
python auto_commit.py
```

**Output Example:**
```
╔══════════════════════════════════════════════════════╗
║          🔄  DSA Auto-Commit Watcher  🔄             ║
╚══════════════════════════════════════════════════════╝

  Repo :  e:\A2Z Striver C++ DSA\Data Structure and Algorithm
  Watch:  Recursive — all subdirectories
  For  :  .exe creation / modification → auto-commit .cpp
  Min  :  File size 1024 bytes | Retries 3x

  Press Ctrl+C to stop.

  [12:40:58]  Watcher started — waiting for .exe events …
```

### Features
- ✅ **Automatic commit** on successful compilation
- ✅ **Retry logic** (3 attempts for failed pushes)
- ✅ **File validation** (skips incomplete/corrupted executables)
- ✅ **Cooldown protection** (prevents duplicate commits within 5 seconds)
- ✅ **Smart messages** (e.g., "Add Supreme: QuickSort")
- ✅ **Color-coded logs** (info, success, skip, error)

### Configuration
Edit `auto_commit.py` to customize:
```python
COOLDOWN_SECONDS = 5           # Wait time between commits
MIN_FILE_SIZE = 1024           # Minimum .exe size (bytes)
MAX_PUSH_RETRIES = 3           # Push retry attempts
RETRY_DELAY = 2                # Delay between retries (seconds)
```

---

## 📝 Commit Message Format

The script auto-generates meaningful commit messages:

| File Path | Commit Message |
|-----------|---|
| `STL/Vectors.cpp` | `Add STL: Vectors` |
| `Supreme/QuickSort.cpp` | `Add Supreme: QuickSort` |
| `Start Codes/Array.cpp` | `Add Start Codes: Array` |
| `Arrays/LEETCODE/TwoSum.cpp` | `Add Arrays/LEETCODE: TwoSum` |

Updates to existing files: `Update [path]: [filename]`

---

## 🔄 Git Workflow

### Basic Commands
```bash
# View status
git status

# View commit history
git log --oneline

# Pull latest changes
git pull origin main

# Push manually (if not using auto-commit)
git push origin main

# View differences
git diff
```

### Auto-Commit Disabled?
If you want to commit manually:
```bash
git add filename.cpp
git commit -m "Your message"
git push origin main
```

---

## 📊 Progress Tracking

Track your progress through the A2Z DSA curriculum:

- [ ] **STL Mastery** - Complete all 6 files
- [ ] **Basics** - Complete Start Codes folder
- [ ] **Sorting** - Master all 7 sorting algorithms in Supreme
- [ ] **Arrays** - Solve 10+ array problems
- [ ] **Strings** - Solve 10+ string problems
- [ ] **LinkedLists** - Implement all operations
- [ ] **Stacks & Queues** - Complete all patterns
- [ ] **Trees** - Binary, BST, AVL trees
- [ ] **Graphs** - DFS, BFS, Dijkstra, etc.
- [ ] **Dynamic Programming** - Master classic DP problems

---

## 💡 Tips & Best Practices

### Naming Convention
```
✅ Good:
  QuickSort.cpp
  TwoSum.cpp
  BinarySearch.cpp

❌ Bad:
  sort.cpp
  problem.cpp
  code123.cpp
```

### Code Organization
```cpp
#include <bits/stdc++.h>
using namespace std;

// Constants
const int MAX_N = 1e5;

// Helper functions
void solve() {
    // Your code here
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}
```

### Testing Locally
```bash
# Compile
g++ -o QuickSort.exe QuickSort.cpp

# Run
./QuickSort.exe
```

---

## 📚 Resources

- **A2Z Striver Course** - [Link](https://takeuforward.org/)
- **LeetCode** - [Problems & Solutions](https://leetcode.com)
- **GeeksforGeeks** - [DSA Tutorials](https://geeksforgeeks.org)
- **CP-Algorithms** - [Advanced Algorithms](https://cp-algorithms.com)

---

## 🚀 GitHub Repository

**Repository**: [CHimPat073/Sorting-Algo](https://github.com/CHimPat073/Sorting-Algo)

- **100+ Commits** ✓
- **Active Development** ✓
- **Well-Documented** ✓

---

## 📄 License

This repository is open-source and available under the **MIT License**.

---

## 👨‍💻 Author

**CHimPat073** - Data Structures & Algorithms Enthusiast

---

## 🤝 Contributing

Found a bug? Want to optimize a solution? Contributions are welcome!

1. Fork the repository
2. Create a new branch (`git checkout -b feature/improvement`)
3. Commit your changes (`git commit -m "Add improvement"`)
4. Push to the branch (`git push origin feature/improvement`)
5. Open a Pull Request

---

## 📞 Support

- 📧 Issues? Open a GitHub issue
- 💬 Questions? Check the repository discussions
- 🐛 Bug reports? Create a detailed issue

---

**Last Updated**: July 9, 2026

**Status**: 🟢 Active Development

Happy Coding! 🎯