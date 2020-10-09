/*
    Minimum Element in a sorted and rotated array. 
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

    return -1;
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

        int pivot_element = findPivot(array, n);

        (pivot_element != (n - 1)) ? cout<<array[pivot_element + 1] : cout<<array[0];
        cout<<endl; 
    }

    return 0;
}