/*
    Kth smallest element - Quick Sort Approach.

    A basic approach is to perform merge sort and then access the kth element of the array which will take
    O(n * logn) time.

    TIme Complexity:
        Worst Case: O(n*n)
        Average Case: O(n)
*/

#include<iostream>
#include<algorithm>

using namespace std;

int partition(int array[], int low, int high)
{
    int pivot_element = array[low];
    int i = low, j = high;

    while(i < j)
    {
        do
        {
            i++;
        }while(array[i] <= pivot_element);

        do
        {
            j--;
        } while (array[j] > pivot_element);

        if(i < j)
        {
            swap(array[i], array[j]);
        }
    }

    swap(array[low], array[j]);

    return j;
}

int kthSmallestElement(int array[], int low, int high, int k)
{
    if(low < high)
    {
        int pivot = partition(array, low, high);

        if(pivot == k)
        {
            return array[pivot];
        }

        else if(k < pivot)
        {
            kthSmallestElement(array, low, pivot, k);
        }

        else
        {
            kthSmallestElement(array, pivot + 1, high, k);
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"Enter the array elements: ";
    int *array = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    int k;
    cout<<"Enter the value of K: ";
    cin>>k;

    int res = kthSmallestElement(array, 0, n, k - 1);

    cout<<"The "<<k<<"th smallest element is: "<<res;

    return 0;
}