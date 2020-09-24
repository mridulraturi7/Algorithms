/*
    Selection Sort.

    This algorithm sorts an array by repeatedly finding the minimum element from the unsorted array
    and placing it at the beginning.

    Time Complexity Analysis:
        Best Case     : O(n*n)
        Average Case  : O(n*n)
        Worst Case    : O(n*n)
*/

#include<iostream>

using namespace std;

void selectionSort(int array[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for(int j = i + 1; j < n; j++)
        {
            if(array[j] < array[min_index])
            {
                min_index = j;
            }
        }

        int temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
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

    cout<<"Performing Selection Sort......"<<endl;

    selectionSort(array, n);

    cout<<"Array after performing Selection Sort: ";
    for(int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}