/*
    Power of a number - That works for float base and negative exponents.
*/

#include<iostream>

using namespace std;

float findPower(float a, int b)
{
    if(a == 0)
    {
        return 0;
    }

    if(b == 0)
    {
        return 1;
    }

    float temp = findPower(a, b / 2);

    if((b % 2) == 0)
    {
        return temp * temp;
    }

    else
    {
        if(b > 0)
        {
            return a * temp * temp;
        }

        else
        {
            return (temp * temp) / a;
        }
    }
}

int main()
{
    float a, b;
    cout<<"Enter the number(base): ";
    cin>>a;

    cout<<"Enter the exponent: ";
    cin>>b;

    float res = findPower(a, b);

    cout<<a<<" to the power "<<b<<" is: "<<res;

    return 0;
}