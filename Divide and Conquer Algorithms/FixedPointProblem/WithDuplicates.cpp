/*
    Find fixed Point in an array which may contain duplicate elements.
*/

#include<iostream>

using namespace std;

int min(int a, int b)
{
    return a < b ? a : b;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

int findFixedPoint(int array[], int l, int h)
{
    if(l <= h)
    {
        int mid = (l + h) / 2;

        if(mid == array[mid])
        {
            return mid;
        }

        int left = findFixedPoint(array, l, min(mid - 1, array[mid]));

        if(left >= 0)
        {
            return left;
        }

        return findFixedPoint(array, max(mid + 1, array[mid]), h);
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