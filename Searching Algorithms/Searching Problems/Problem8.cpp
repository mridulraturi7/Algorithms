/*
    Searching an element in a Sorted Array.
*/

#include<iostream>

using namespace std;

int binarySearch(int array[], int n, int k)
{
    int low = 0, high = n - 1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(array[mid] == k)
        {
            return 1;
        }

        else if(k < array[mid])
        {
            high = mid - 1;
        }

        else
        {
            low = mid + 1;
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
        cin>>n>>k;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        int found = binarySearch(array, n, k);

        cout<<found<<endl;
    }
}