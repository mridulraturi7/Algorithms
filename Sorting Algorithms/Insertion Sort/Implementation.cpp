/*
    Insertion Sort.

    Algorithm:
        Step 1: Iterate from array[i] to array[n - 1] over the array.
        Step 2: Compare the current element(key) with its predecessor.
        Step 3: If the key is smaller than predecessor element, compare it with the elements before.
                Move the elements one step up to make the space for the key element.

    Time Complexity Analysis:
        Best Case: O(n) -- when the array is already sorted.
        Average Case: O(n*n)
        Worst Case: O(n*n)

    
*/

#include<iostream>

using namespace std;

void insertionSort(int array[], int n)
{
    int key;
    for(int i = 1; i < n; i++)
    {
        key = array[i];
        int j = i - 1;

        while(j >= 0 && array[j] > key)
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
    cout<<"Enter the size of Input Array: ";
    cin>>n;

    int *array = new int[n];
    cout<<"Enter Array Elements: ";
    for(int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    cout<<"Performing Insertion Sort......"<<endl;

    insertionSort(array, n);

    cout<<"Array after performing Insertion Sort: ";
    for(int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}