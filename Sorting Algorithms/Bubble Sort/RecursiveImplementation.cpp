/*
    Bubble Sort (Recursive Implementation).
*/

#include<iostream>

using namespace std;

void bubbleSort(int array[], int n)
{
    if(n == 1)
        return;

    for(int i = 0; i < n - 1; i++)
    {
        if(array[i] > array[i + 1])
        {
            int temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
        }
    }

    return bubbleSort(array, n - 1);
}

int main()
{
    int n;
    cout<<"Enter the size of Input Array: ";
    cin>>n;

    cout<<"Enter Array Elements: ";
    int *array = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    bubbleSort(array, n);

    cout<<"Performing Bubble Sort......"<<endl;

    cout<<"Array after performing Bubble Sort: ";
    for(int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}