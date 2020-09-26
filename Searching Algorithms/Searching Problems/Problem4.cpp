/*
    Square Root.
*/

#include<iostream>

using namespace std;

long long int floorSqrt(long long int x)
{
    long long int left = 1, right = x, sq;

    while(left <= right)
    {
        long long int mid = (left + right) / 2;

        if((mid * mid) == x)
        {
            return mid;
        }

        else if((mid * mid) < x)
        {
            left = mid + 1;
            sq = mid;
        }

        else
        {
            right = mid - 1;
        }
    }

    return sq;
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