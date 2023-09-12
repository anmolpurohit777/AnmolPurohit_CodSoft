//SIMPLE CALCULATOR
#include <iostream>
using namespace std;

int main()
{
    double n1, n2,ans;
    char operation;

    cout<<"Enter first number:";
    cin>>n1;

    cout<<"Enter an operator:";
    cin>>operation;

    cout<<"Enter second number:";
    cin>>n2;

    try
    {
        switch(operation)
        {
            case '+':
                ans=n1+n2;
                break;
            case '-':
                ans=n1-n2;
                break;
            case '*':
                ans=n1*n2;
                break;
            case '/':
                if(n2==0)
                    throw n2;
                ans=n1/n2;
                break;
            default:
                cout<<"Invalid operation!";
            cout<<"Answer:"<<ans;
        }
    }
    catch(double x)
    {
        cout<<"Divide by zero Exception!";
    }

    return 0;
}