/*
    Bubble Sort (Optimized Implementation).
*/

#include<iostream>

using namespace std;

void bubbleSort(int array[], int n)
{
    bool swapped;
    for(int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for(int j = 0; j < n - i - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
                int temp;
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                swapped = true;
            }
        }

        if(swapped == false)
        {
            break;
        }
    }
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