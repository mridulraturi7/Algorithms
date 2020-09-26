/*
    Square Root.
*/

#include<iostream>
#include<cmath>

using namespace std;

long long int floorSqrt(long long int x)
{
    if(x == 0 || x == 1)
    {
        return x;
    }

    return floor(sqrt(x));
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        long long int x;
        cin>>x;

        cout<<floorSqrt(x)<<endl;
    }

    return 0;
}