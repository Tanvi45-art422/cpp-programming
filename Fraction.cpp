#include <iostream>
using namespace std;

class Fraction
{
    int numerator, denominator;

public:
    void input()
    {
        cout << "Enter numerator and denominator: ";
        cin >> numerator >> denominator;
    }

    void display()
    {
        cout << numerator << "/" << denominator << endl;
    }

    Fraction add(Fraction f)
    {
        Fraction temp;

        temp.numerator = (numerator * f.denominator) +
                         (denominator * f.numerator);

        temp.denominator = denominator * f.denominator;

        return temp;
    }

    Fraction sub(Fraction f)
    {
        Fraction temp;

        temp.numerator = (numerator * f.denominator) -
                         (denominator * f.numerator);

        temp.denominator = denominator * f.denominator;

        return temp;
    }
};

int main()
{
    Fraction f1, f2, f3, f4;

    cout << "Enter first fraction:" << endl;
    f1.input();

    cout << "Enter second fraction:" << endl;
    f2.input();

    f3 = f1.add(f2);
    f4 = f1.sub(f2);

    cout << "Addition: ";
    f3.display();

    cout << "Subtraction: ";
    f4.display();

    return 0;
}