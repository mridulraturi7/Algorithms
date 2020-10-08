/*
    Search in a Rotated Array (Approach 1 - Using Binary Search).
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array/0/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy
*/

#include <iostream>

using namespace std;

long findPivotPoint(long long array[], long n)
{
    long l = 0, r = n - 1;
    while(l <= r)
    {
        long mid = (l + r) / 2;
        
        if(l == r) 
        return l;
        
        else if(mid < r && array[mid] > array[mid + 1]) 
        {
            return mid;
        }
  
        else if(mid > l && array[mid] < array[mid - 1]) 
        {
            return (mid - 1);
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

long binarySearch(long long array[], long l, long r, long long k)
{
    while(l <= r)
    {
        long mid = (l + r) / 2;
        if(array[mid] == k)
        {
            return mid;
        }

        else if(array[mid] < k)
        {
            l = mid + 1;
        }

        else
        {
            r = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        long n;
        long long k;
        cin>>n;

        long long *array = new long long[n];
        for(long i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        cin>>k;

        long pivot = findPivotPoint(array, n);

        long found;
        
        if(k <= array[pivot] && k >= array[0])
        {
            found = binarySearch(array, 0, pivot, k);
        }

        else
        {
            found = binarySearch(array, pivot + 1, n - 1, k);
        }
        
        cout<<found<<endl;
    }

    return 0;
}