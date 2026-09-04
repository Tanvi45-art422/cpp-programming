#include <iostream>
using namespace std;

class SavingAccount
{
    int accno;
    string name;
    float balance;

public:

    SavingAccount(int a, string n, float b)
    {
        accno = a;
        name = n;
        balance = b;
    }

    void deposit(float amount)
    {
        balance = balance + amount;
    }

    void withdraw(float amount)
    {
        if (amount <= balance)
            balance = balance - amount;
        else
            cout << "Insufficient Balance" << endl;
    }

    void calculate_rate()
    {
        float interest = balance * 0.05;
        cout << "Interest = " << interest << endl;
    }
    void display()
    {
        cout << "Account No: " << accno << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    class CheckingAccount
    {
    public:

        void check()
        {
            cout << "This is Checking Account" << endl;
        }
    };
};

int main()
{
    SavingAccount s1(1234, "Tanvi", 12000);

    cout << "Saving Account:" << endl;
    s1.display();

    s1.deposit(2000);

    cout << "\nAfter Deposit:" << endl;
    s1.display();

    s1.withdraw(1000);

    cout << "\nAfter Withdraw:" << endl;
    s1.display();

    s1.calculate_rate();

    SavingAccount::CheckingAccount c1;

    cout << endl;
    c1.check();

    return 0;
}