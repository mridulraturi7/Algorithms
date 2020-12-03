/*
    Power of a number.
*/

#include<iostream>

using namespace std;

int findPower(int a, int b)
{
    if(a == 0)
    {
        return 0;
    }

    if(b == 0)
    {
        return 1;
    }

    if((b % 2) == 0)
    {
        return findPower(a, b / 2) * findPower(a, b / 2);
    }

    else
    {
        return a * findPower(a, b / 2) * findPower(a, b / 2);
    }
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