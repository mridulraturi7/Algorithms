/*
    Binary Search Algorithm.
    Binary Search is the most widely used searching algorithm.
    It follows divide and conquer approach.
    Binary Search Algorithm requires set of elements in sorted order.
    Time Complexity = Theta(logn)
*/

#include<iostream>

using namespace std;

int binarySearch(int array[], int n, int x)
{
    int begin = 0, end = n - 1, mid;

    while(begin <= end)
    {
        mid = (begin + end)/2;

        if(array[mid] == x)
            return mid;

        else if(array[mid] < x)
            begin = mid + 1;

        else
            end = mid - 1;
    }

    return -1;
}

int main()
{
    int array[] = {1, 2, 3, 5, 6, 7, 10, 11, 12};
    int x;
    int n = sizeof(array)/sizeof(array[0]);

    cout<<"Enter the element to be searched: ";
    cin>>x;

    int res = binarySearch(array, n, x);

    (res == -1) ? cout<<"Element is not present in array" : cout<<"Element is present at index: "<<res;

    return 0; 
}