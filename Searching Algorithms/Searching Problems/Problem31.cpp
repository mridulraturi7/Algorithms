/*
    Floor in a sorted array.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array/0/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy
*/

#include<iostream>

using namespace std;

int findFloorValue(int array[], int n, int x)
{
    int l = 0, r = n - 1, floor_index = -1;

    while(l <= r)
    {
        int mid = (l + r) / 2;

        if(array[mid] == x)
        {
            floor_index = mid;
            break;
        }

        else if(array[mid] > x)
        {
            r = mid - 1;
        }

        else
        {
            floor_index = mid;
            l = mid + 1;
        }
    }

    return floor_index;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, x;
        cin>>n>>x;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        cout<<findFloorValue(array, n, x)<<endl;
    }

    return 0;
}