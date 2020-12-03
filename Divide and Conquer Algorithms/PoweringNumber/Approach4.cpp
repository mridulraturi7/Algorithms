/*
    Power of a number - Divide and Conquer(Optimized).

    Time Complexity - O(logn)
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

    int temp = findPower(a, b / 2);

    if((b % 2) == 0)
    {
        return temp * temp;
    }

    else
    {
        return a * temp * temp;
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