#include <iostream>
using namespace std;

class Interest
{
    float principal, rate, time;

public:
    void accept()
    {
        cout << "Enter Principal: ";
        cin >> principal;

        cout << "Enter Rate: ";
        cin >> rate;

        cout << "Enter Time: ";
        cin >> time;
    }

    void calculate()
    {
        float SI;

        SI = (principal * rate * time) / 100;

        cout << "Simple Interest = " << SI;
    }
};

int main()
{
    Interest i;

    i.accept();
    i.calculate();

    return 0;
}