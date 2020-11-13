/*
    Merge Sort.

    Merge Sort is a Divide and Conquer Algorithm.

    It divides the array into two halves, calls itself for two halves and then merges the two sorted halves.

    Time Complexity Analysis:
        Best Case       : O(n*logn)
        Avergae Case    : O(n*logn)
        Worst Case      : O(n*logn)

    Space Complexity Analysis:
        Auxiliary Space : O(n)

    

    
*/

#include<iostream>

using namespace std;

void merge(int array[], int low, int mid, int high)
{
    //Size of the merged array will be (high - low + 1)
    int *res = new int[high - low + 1];
    
    int i = low, j = mid + 1, k = low;

    while(i <= mid && j <= high)
    {
        if(array[i] < array[j])
        {
            res[k++] = array[i];
            i++;
        }

        else
        {
            res[k++] = array[j];
            j++;
        }
    }

    while(i <= mid)
    {
        res[k++] = array[i];
        i++;
    }

    while(j <= high)
    {
        res[k++] = array[j];
        j++;
    }

    for(int x = low; x <= high; x++)
    {
        array[x] = res[x];
    }
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

    return 0;
}