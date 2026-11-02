#include <iostream>
using namespace std;

class Distance
{
    int feet, inches;

public:
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }

    void operator-()
    {
        --feet;
        --inches;
    }

    void display()
    {
        cout << "Feet & Inches(Decrement): "
             << feet << "'" << inches;
    }
};

int main()
{
    Distance d1(8, 9);

    -d1;

    d1.display();

    return 0;
}