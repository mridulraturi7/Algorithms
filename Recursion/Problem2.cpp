/*
    Number of Paths.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/number-of-paths0926/1/?category[]=Recursion&difficulty[]=-1&page=1&query=category[]Recursiondifficulty[]-1page1
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

int numberOfPaths(int m, int n)
{
    if(m == 1 || n == 1)
    {
        return 1;
    }

    return numberOfPaths(m, n - 1) + numberOfPaths(m - 1, n);
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int m, n;
        cin>>m>>n;

        cout<<numberOfPaths(m, n)<<endl;
    }

    return 0;
}