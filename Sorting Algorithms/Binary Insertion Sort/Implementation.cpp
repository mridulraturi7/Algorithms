/*
    Binary Insertion Sort.

    We can use binary search to reduce the number of comparisons in normal Insertion Sort.

    Binary Insertion Sort makes use of binary search to find the proper location to insert 
    the key element at each iteration.
*/

#include<iostream>

using namespace std;

int binarySearch(int array[], int item, int low, int high)
{
    if(high <= low)
    {
        return (item > array[low]) ? low + 1 : low; 
    }

    int mid = (low + high) / 2;

    if(item == array[mid])
    {
        return mid + 1;
    }

    else if(item < array[mid])
    {
        return binarySearch(array, item, low, mid - 1);
    }

    return binarySearch(array, item, mid + 1, high);
}

void binaryInsertionSort(int array[], int n)
{
    int key;
    for(int i = 1; i < n; i++)
    {
        key = array[i];
        int j = i - 1;

        int location = binarySearch(array, key, 0, j);

        while(j >= location)
        {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;
    }
}

int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;

    int *array = new int[n];
    cout<<"Enter Array Elements: ";
    for(int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    cout<<"Performing Binary Insertion Sort......"<<endl;

    binaryInsertionSort(array, n);

    cout<<"Array after performing Binary Inertion Sort: ";
    for(int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}