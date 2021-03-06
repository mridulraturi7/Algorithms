/*
    Count Zeroes in a Sorted Matrix.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/count-zeros-in-a-sorted-matrix/1/?category[]=Searching&difficulty[]=-1&page=1&query=category[]Searchingdifficulty[]-1page1
    Difficulty - Basic

    Required Time Complexity - O(n)
*/

#include<iostream>

using namespace std;

int countZeros(int **A, int n);

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        int **A = new int*[n];
        for(int i = 0; i < n; i++)
        {
            A[i] = new int[n];
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin>>A[i][j];
            }
        }

        cout<<countZeros(A, n)<<endl;
    }

    return 0;
}

int countZeros(int **A, int n)
{
    int zeros = 0;
    for(int j = 0; j < n; j++)
    {
        int i = n - 1;
        while(A[i][j] != 0)
        {
            i--;

            if(i < 0)
                return zeros;
        }

        zeros += (i + 1);
    }

    return zeros;
}