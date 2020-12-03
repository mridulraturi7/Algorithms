/*
    Powering a Number.
*/

#include<iostream>

using namespace std;

int findPower(int a, int b)
{
    int res = 1;
    for(int i = 0; i < b; i++)
    {
        res *= a;
    }

    return res;
}

int main()
{
    int a, b;
    cout<<"Enter the number(base): ";
    cin>>a;

    cout<<"Enter the exponent: ";
    cin>>b;

    int res = findPower(a, b);

    cout<<a<<" to the power "<<b<<" is: "<<res;

    return 0;
}