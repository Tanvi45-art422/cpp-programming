#include <iostream>
using namespace std;

class Calculator
{
    int a, b;

public:
    void accept()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void calculate()
    {
        cout << "\nAddition = " << a + b;
        cout << "\nSubtraction = " << a - b;
        cout << "\nMultiplication = " << a * b;

        if (b != 0)
        {
            cout << "\nDivision = " << (float)a / b;
            cout << "\nModulus = " << a % b;
        }
        else
        {
            cout << "\nDivision and Modulus are not possible by zero.";
        }
    }
};

int main()
{
    Calculator c;

    c.accept();
    c.calculate();

    return 0;
}