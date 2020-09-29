/*
    Search an element in an Array.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array/0/?category[]=Searching&difficulty[]=-1&page=1&query=category[]Searchingdifficulty[]-1page1
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
        int n, k;
        cin>>n;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        cin>>k;

        int index = -1;
        for(int i = 0; i < n; i++)
        {
            if(array[i] == k)
            {
                index = i;
                break;
            }
        }

        cout<<index<<endl;
    }

    return 0;
}