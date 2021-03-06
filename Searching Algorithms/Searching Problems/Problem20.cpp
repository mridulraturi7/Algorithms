/*
    Peak Element.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/peak-element/1/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy

    Expected Time Complexity - O(logn)
    Expected Space Complexity - O(1)
*/

#include<iostream>

using namespace std;

int peakElement(int array[], int n)
{
    int l = 0, r = n - 1, peak_index = -1;
    while(l <= r)
    {
        int mid = (l + r) / 2;

        if((mid == 0 || array[mid - 1] <= array[mid]) && (mid == n - 1 || array[mid + 1] <= array[mid]))
        {
            peak_index = mid;
            break;
        }

        else if(array[mid + 1] > array[mid])
        {
            l = mid + 1;
        }

        else
        {
            r = mid - 1;
        }
    }

    return peak_index;
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

        int peak_index = peakElement(array, n);
        cout<<array[peak_index]<<endl;
    }

    return 0;
}