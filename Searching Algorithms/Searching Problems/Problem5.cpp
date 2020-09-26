/*
    Square Root.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/square-root/1/?category[]=Searching&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]SearchingproblemStatusunsolveddifficulty[]-1page1
    Difficulty - Basic

    Solution using library functions.
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