/*
    Fixed Point Problem.

    Problem Statement: Fiven an array sorted in ascending order, find the fixed point in the array.
    A fixed point is an index at which index becomes equal to the value at the index.

    Time Complexity - O(logn)
*/

#include<iostream>

using namespace std;

int findFixedPoint(int array[], int low, int high)
{
    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(array[mid] == mid)
        {
            return mid;
        }

        else if(mid > array[mid]) //If index is greater than value at index, then fixed point will be in right side, if present.
        {
            low = mid + 1;
        }

        else                    //Else fixed point will be in left side.
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *array = new int[n];
    cout<<"Enter the array elemnts in sorted order: ";
    for(int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    int fixedPoint = findFixedPoint(array, 0, n - 1);

    if(fixedPoint == -1)
    {
        cout<<"There is no fixed point in the array.";
    }

    else
    {
        cout<<"Fixed Point is: "<<fixedPoint;
    }

    return 0;
}