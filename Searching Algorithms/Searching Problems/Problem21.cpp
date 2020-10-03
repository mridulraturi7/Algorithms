/*
    Indec of an Extra Element.
*/

#include<iostream>

using namespace std;

int findExtra(int array1[], int array2[], int n)
{
    int l = 0, r = n - 2;
    while(l <= r)
    {
        int mid = (l + r) / 2;

        if(array1[mid] != array2[mid] && array1[mid - 1] == array2[mid - 1])
        {
            return mid;
        }

        else if(array1[mid] == array2[mid])
        {
            l = mid + 1;
        }

        else
        {
            r = mid - 1;
        }
    }
    return n - 1;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        int *array1 = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array1[i];
        }

        int *array2 = new int[n - 1];
        for(int i = 0; i < n - 1; i++)
        {
            cin>>array2[i];
        }

        cout<<findExtra(array1, array2, n)<<endl;
    }
}