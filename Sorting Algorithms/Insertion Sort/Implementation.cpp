/*
    Insertion Sort.
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
}