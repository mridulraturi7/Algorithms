/*
    Leaders in an Array - Approach 1 - Brute Force.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy
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
        cin>>n;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        for(int i = 0; i < n - 1; i++)
        {
            bool leader = true;
            for(int j = i + 1; j < n; j++)
            {
                if(array[j] > array[i])
                {
                    leader = false;
                    break;
                }
            }

            if(leader)
            {
                cout<<array[i]<<" ";
            }
        }

        cout<<array[n - 1]<<endl;
    }
}