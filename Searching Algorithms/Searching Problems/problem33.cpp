/*
    Search in a Rotated Array (Approach 1 - Using Linear Search).
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array/0/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy

    Time Complexity - O(n)
    Space Complexity - O(1)
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, k;
        cin>>n;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        cin>>k;
        int found = -1;

        for(int i = 0; i < n; i++)
        {
            if(array[i] == k)
            {
                found = i;
                break;
            }
        }

        cout<<found<<endl;
    }

    return 0;
}