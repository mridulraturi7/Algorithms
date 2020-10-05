/*
    Array subset of another array - Approach 1 - Brute Force.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/array-subset-of-another-array/0/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy
*/

#include<iostream>

using namespace std;

int check(int array1[], int m, int key)
{
    for(int i = 0; i < m; i++)
    {
        if(array1[i] == key)
        {
            return 1;
        }
    }
    
    return 0;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int m, n;
        cin>>m>>n;

        int *array1 = new int[m];
        for(int i = 0; i < m; i++)
        {
            cin>>array1[i];
        }

        int *array2 = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array2[i];
        }

        int common = 0;

        for(int i = 0; i < n; i++)
        {
            int checkIfPresent = check(array1, m, array2[i]);
            common += checkIfPresent;
        }

        if(common == n)
        {
            cout<<"Yes"<<endl;
        }

        else
        {
            cout<<"No"<<endl;
        }
    }

    return 0;
}