/*
    Square Root.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/square-root/1/?category[]=Searching&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]SearchingproblemStatusunsolveddifficulty[]-1page1
    Difficulty - Basic

    Required Time Complexity - O(logn).

    Solution without using library functions.
*/

#include<iostream>

using namespace std;

long long int floorSqrt(long long int x)
{
    if(x == 0 || x == 1)
    {
        return x;
    }

    long long int left = 1, right = x / 2, sq;

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