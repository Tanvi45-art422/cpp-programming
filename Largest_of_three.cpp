#include<iostream>
using namespace std;
int main()
{
    int a,b,c;

    cout<<"Enter two numbers:";
    cin>>a>>b>>c;

    if(a>b && a>c)
    cout<<"Largest number= "<<a;

    else if (b>c)
    cout<<"Largest number= "<<b;

    else
    cout<<"Largest number ="<<c;
    
    return 0;
}