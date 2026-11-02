#include <iostream>
using namespace std;

class Distance
{
    int feet, inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }

    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }

    Distance operator+(Distance &d2)
    {
        Distance d3;
        d3.feet = feet + d2.feet;
        d3.inches = inches + d2.inches;
        return d3;
    }

    void display()
    {
        cout << feet << "'" << inches;
    }
};

int main()
{
    Distance d1(8, 9);
    Distance d2(10, 2);
    Distance d3;

    d3 = d1 + d2;

    cout << "Total Distance: ";
    d3.display();

    return 0;
}