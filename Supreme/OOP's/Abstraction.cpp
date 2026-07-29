#include <bits/stdc++.h>
using namespace std;

// ✅ Encapsulation: data hide + controlled access
class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }

    // ✅ Getter (read-only access)
    double getBalance() {
        return balance;
    }

    // ✅ Controlled update (withdraw)
    bool withdraw(double amount) {
        if(amount <= 0) return false;

        if(amount > balance) {
            cout << "Insufficient balance!\n";
            return false;
        }

        balance -= amount;
        return true;
    }

    // ✅ Controlled update (deposit)
    void deposit(double amount) {
        if(amount > 0) balance += amount;
    }
};


// ✅ Abstraction: user ko sirf simple interface dena (what), inside hide (how)
class ATM {
private:
    // user ko ye internal steps nahi pata hone chahiye
    bool validatePin(int pin) {
        return pin == 1234;
    }

public:
    void withdrawMoney(BankAccount &user, int pin, double amount) {
        if(!validatePin(pin)) {
            cout << "Wrong PIN!\n";
            return;
        }

        bool ok = user.withdraw(amount);
        if(ok) {
            cout << "Withdraw Successful ✅\n";
            cout << "Remaining Balance: " << user.getBalance() << endl;
        }
    }

    void checkBalance(BankAccount &user, int pin) {
        if(!validatePin(pin)) {
            cout << "Wrong PIN!\n";
            return;
        }

        cout << "Current Balance: " << user.getBalance() << endl;
    }
};


int main() {
    BankAccount user("ACC123", 5000);

    ATM atm;

    atm.checkBalance(user, 1234);
    atm.withdrawMoney(user, 1234, 2000);
    atm.checkBalance(user, 1234);

    return 0;
}
