/*
    Bubble Sort.
    --Bubble Sort is the simplest sorting algorithm that works by swapping the adjacent elements
    --if they are in wrong order.

    Time Complexity:
        Worst Case : O(n^2)
        Average Case : O(n^2)
        Best Case : O(n^2)

    Space Complexity Analysis:
        Auxiliary Space = O(1)

    Bubble Sort is In-Place Sorting Algorithm.
    Bubble Sort is Stable Sorting Algorithm.

    --The following code will always run O(n^2) times even if the array is sorted.
    --We can optimize it by stopping the algorithm is the inner loop doesn't cause any swap operation.
*/

#include<iostream>

using namespace std;

void bubbleSort(int array[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
                int temp;
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
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