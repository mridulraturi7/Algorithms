/*
    Quick Sort.
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
    int pivot = array[low];

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

        quickSort(array, 0, pivot_index - 1);
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

    quickSort(array, 0, n - 1);

    cout<<"Performing Quick Sort......"<<endl;

    cout<<"Array after performing Quick Sort: ";
    for(int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
}