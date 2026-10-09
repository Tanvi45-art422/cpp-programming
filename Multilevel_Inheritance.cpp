#include <iostream>
#include <string>
using namespace std;


class Student
{
protected:
    string name;
    int rollNo;

public:
    void getStudentDetails()
    {
        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Roll No: ";
        cin >> rollNo;
    }
};


class Marks : public Student
{
protected:
    float marks[5];

public:
    void getMarks()
    {
        cout << "\nEnter marks for 5 subjects:\n";

        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
};


class Result : public Marks
{
private:
    float total, percentage;

public:
    void calculate()
    {
        total = 0;

        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }

        percentage = total / 5;
    }

    void display()
    {
        cout << "\n---------- STUDENT RESULT ----------\n";
        cout << "Student Name : " << name << endl;
        cout << "Roll No      : " << rollNo << endl;

        cout << "\nSubject Marks:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << " : " << marks[i] << endl;
        }

        cout << "\nTotal Marks  : " << total << " / 500" << endl;
        cout << "Percentage   : " << percentage << "%" << endl;

       
    }
};

int main()
{
    Result student;

    student.getStudentDetails();
    student.getMarks();
    student.calculate();
    student.display();

    return 0;
}
