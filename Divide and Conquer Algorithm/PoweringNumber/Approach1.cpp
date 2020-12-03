/*
    Powering a Number.
*/

#include<iostream>

using namespace std;

int main()
{
    int a, b;
    cout<<"Enter the number(base): ";
    cin>>a;

    cout<<"Enter the exponent: ";
    cin>>b;

    int res = 1;
    for(int i = 0; i < b; i++)
    {
        res = res * a;
    }

    cout<<a<<" to the power "<<b<<" is: "<<res;

    return 0;
}