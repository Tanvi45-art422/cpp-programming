#include <iostream>
using namespace std;

class BankAccount {
protected:
    double balance;

public:
    BankAccount(double b) : balance(b) {}

    virtual void withdraw(double amount) {
        balance -= amount;
        cout << "Withdraw: " << amount << endl;
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(double b) : BankAccount(b) {}

    void withdraw(double amount) override {
        if (balance - amount >= 1000)
            BankAccount::withdraw(amount);
        else
            cout << "Minimum balance required!\n";
    }
};

class CurrentAccount : public BankAccount {
public:
    CurrentAccount(double b) : BankAccount(b) {}

    void withdraw(double amount) override {
        balance -= amount;
        cout << "Current Account Withdraw: " << amount << endl;
    }
};

int main() {
    SavingsAccount s(5000);
    CurrentAccount c(5000);

    BankAccount* account;

    account = &s;
    account->withdraw(2000);
    account->showBalance();

    account = &c;
    account->withdraw(6000);
    account->showBalance();

    return 0;
}