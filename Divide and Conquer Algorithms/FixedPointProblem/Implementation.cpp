/*
    Fixed Point Problem.
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

        else if(mid > array[mid])
        {
            low = mid + 1;
        }

        else
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
    cout<<"Enter the array elemnts in sorted order.";
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