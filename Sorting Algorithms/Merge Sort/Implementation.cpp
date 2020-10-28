/*
    Merge Sort.
*/

#include<iostream>

using namespace std;

void merge(int array[], int low, int mid, int high)
{
    
}

void mergeSort(int array[], int low, int high)
{
    if(low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(array, low, mid);
        mergeSort(array, mid + 1, high);

        merge(array, low, mid, high);
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;

    int *array = new int[n];
    cout<<"Enter the elements of Array: ";
    for(int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    mergeSort(array, 0, n - 1);

    cout<<"Performing Merge Sort......"<<endl;

    cout<<"Array after performing Merge Sort: ";
    for(int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
}