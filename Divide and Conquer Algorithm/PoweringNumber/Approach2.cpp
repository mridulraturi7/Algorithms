/*
    Powering a Number - Recursive Approach.
*/

#include<iostream>

using namespace std;

int findPower(int a, int b)
{
    if(b == 0)
    {
        return 1;
    }

    return a * findPower(a, b - 1);
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