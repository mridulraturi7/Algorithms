/*
    Minimum number in a Sorted Rotated Array.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/minimum-number-in-a-sorted-rotated-array/0/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy

    Expected Time Complexity - O(logn)
    Expected Space Complexity - O(1)
*/

#include<iostream>

using namespace std;

int findPivot(int array[], int n)
{
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int mid = (l + r) / 2;

        if(l == r)
        {
            return l;
        }

        else if(mid < r && array[mid] > array[mid + 1])
        {
            return mid;
        }

        else if(mid > l && array[mid] < array[mid - 1])
        {
            return mid - 1;
        }

        else if(array[l] >= array[mid])
        {
            r = mid - 1;
        }

        else
        {
            l = mid + 1;
        }
    }

    return n - 1;
}

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

        int pivot = findPivot(array, n);
        (pivot != n - 1) ? cout<<array[pivot + 1] : cout<<array[0];
        
        cout<<endl;
    }

    return 0;
}