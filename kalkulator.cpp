#include <iostream>
using namespace std;

int main()
{
    char op;
    int a,b;

    cout<<"Please insert an operation(+,-,*,/,%): "; cin>>op;
    cout<<"Now insert two values: "; cin>>a>>b;

    if(op=='+')
    {
        cout<<"a + b = "<<a+b;
    }
    else

    if(op=='-')
    {
        cout<<"a - b = "<<a-b;
    }
    else

    if(op=='*')
    {
        cout<<"a * b = "<<a*b;
    }
    else

    if(op=='/')
    {
        if(b==0) { cout<<"You cannot divide by zero!"; }
        else
        {cout<<"a / b = "<<a/b;}
    }
    else

    if(op=='%')
    {
        if(b==0) { cout<<"You cannot divide by zero!"; }
        else
        cout<<"a % b = "<<a%b;
    }

    return 0;
}
