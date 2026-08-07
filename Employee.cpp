#include<iostream>
using namespace std;

class Employee
{
private:
 int employeeID;
 string name;
 float salary;

public:
void accept()               0
0             (
    cout<<"Enter employeeID:";
    cin>>employeeID;

    cout<<"Enter employee name";
    cin>>name;

    cout<<"Enter salary:";
    cin>>salary;
 }

 void display()
 {
    cout<<"\nEmployee Details"<<endl;
    cout<<"Employee ID:"<<EmployeeID <<endl;
    cout<<"Employee Name:"<<name<<endl;
    cout<<"Salary:"<<salary<<endl;
 }
};
 int main()
 {
    Employee e;
    e.accept();
    e.display();


    return 0;
 }