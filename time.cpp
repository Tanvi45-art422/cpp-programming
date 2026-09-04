#include <iostream>
using namespace std;

class Time
{
    int hour, minute, second;

public:
    void input()
    {
        cout << "Enter time (hh mm ss): ";
        cin >> hour >> minute >> second;
    }

    void display()
    {
        cout << hour << ":" << minute << ":" << second << endl;
    }

    Time add(Time t)
    {
        Time temp;

        temp.second = second + t.second;
        temp.minute = minute + t.minute;
        temp.hour = hour + t.hour;

        if (temp.second >= 60)
        {
            temp.second = temp.second - 60;
            temp.minute++;
        }

        if (temp.minute >= 60)
        {
            temp.minute = temp.minute - 60;
            temp.hour++;
        }

        return temp;
    }
};

int main()
{
    Time t1, t2, t3;

    cout << "Enter first time:" << endl;
    t1.input();

    cout << "Enter second time:" << endl;
    t2.input();

    t3 = t1.add(t2);

    cout << "Addition of Time: ";
    t3.display();

    return 0;
}