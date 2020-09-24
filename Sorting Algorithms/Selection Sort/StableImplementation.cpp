/*
    Stable Selection Sort.
*/

#include<iostream>

using namespace std;

void stableSelectionSort(int array[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min = i;

        for(int j = i + 1; j < n; j++)
        {
            if(array[j] < array[min])
            {
                min = j;
            }
        }

        int key = array[min];

        while(min > i)
        {
            array[min] = array[min - 1];
            min--;
        }

        array[i] = key;
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

    cout<<"Performing Stable Selection Sort......"<<endl;

    stableSelectionSort(array, n);

    cout<<"Array after performing Stable Selection Sort: ";
    for(int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}