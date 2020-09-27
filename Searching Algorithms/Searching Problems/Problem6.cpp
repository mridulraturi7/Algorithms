/*
    Doubling the Value.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/doubling-the-value/0/?category[]=Searching&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]SearchingproblemStatusunsolveddifficulty[]-1page1
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        long long int b;
        cin>>n>>b;

        long long int *array = new long long int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        for(int i = 0; i < n; i++)
        {
            if(array[i] == b)
            {
                b *= 2;
            }
        }

        cout<<b<<endl;
    }

    return 0;
}