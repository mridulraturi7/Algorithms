/*
    Insertion Sort (Recursive Implementation).

    Recursive Implementation doesn't have any performance advantage over iterative implementation. 
*/

#include<iostream>

using namespace std;

void insertionSort(int array[], int n)
{
    if(n <= 1)
        return;

    insertionSort(array, n - 1);

    int last = array[n - 1];
    int j = n - 2;

    while(j >= 0 && array[j] > last)
    {
        array[j + 1] = array[j];
        j--;
    }

    array[j + 1] = last;
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