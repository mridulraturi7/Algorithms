/*
    Quick Sort - Taking first element as pivot element.

    Quick Sort is a Divide and Conquer Algorithm.

    It picks an element as pivot and partitions the array around the picked pivot element. The pivot element is 
    sorted such that all the elements to its left side will be less than that pivot element and all the elements 
    to the right of the pivot element will be greater than the pivot element.

    Time Complexity Analysis:
        Best Case       : O(n*logn)
        Average Case    : O(n*logn)
        Worst Case      : O(n*n)

    Space Complexity Analysis:
        Since Quick Sort is a recursive algorithm and it does not use any extra space but it will use a stack 
        to store the recursive function call.
            Stack Size in Best Case  : O(logn)
            Stack Size in Worst Case : O(n)

    Quick Sort is an "In-Place" Sorting Algorithm.

    Quick Sort is not a Stable Sorting Algorithm by default, however it can be made stable.
*/

#include<iostream>

using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int array[], int low, int high)
{
    int pivot = array[low];         //Taking first element as pivot

    int i = low, j = high;

    while(i < j)
    {
        do
        {
            i++;
        }while(array[i] <= pivot);

        do
        {
            j--;
        }while(array[j] > pivot);

        if(i < j)
        {
            swap(&array[i], &array[j]);
        }
    }

    swap(&array[low], &array[j]);
    return j;
}

void quickSort(int array[], int low, int high)
{
    if(low < high)
    {
        int pivot_index = partition(array, low, high);

        quickSort(array, 0, pivot_index);
        quickSort(array, pivot_index + 1, high);
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;

    int *array = new int[n];
    cout<<"Enter Array Elements: ";
    for(int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    quickSort(array, 0, n);

    cout<<"Performing Quick Sort......"<<endl;

    cout<<"Array after performing Quick Sort: ";
    for(int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
}