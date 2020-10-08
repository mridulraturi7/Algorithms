/*
    Search in a Rotated Array (Approach 1 - Using Binary Search).
*/

#include<iostream>

using namespace std;

int findPivotPoint(int array[], int n)
{
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int mid = (l + r) / 2;

        if(array[mid + 1] < array[mid])
        {
            return mid;
        }

        else if(array[l] < array[mid])
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

int binarySearch(int array[], int l, int r, int k)
{
    while(l <= r)
    {
        int mid = (l + r) / 2;
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
        int n, k;
        cin>>n;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        cin>>k;

        int pivot = findPivotPoint(array, n);
        cout<<pivot;

    /*
        int found;
        
        if(k <= array[pivot] && k >= array[0])
        {
            found = binarySearch(array, 0, pivot, k);
        }

        else
        {
            found = binarySearch(array, pivot + 1, n - 1, k);
        }
        
        cout<<found<<endl; */
    }

    return 0;
}