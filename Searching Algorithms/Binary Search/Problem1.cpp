/*
    Rank it.
    This problem is taken from HackerEarth.
    Problem Statement - https://www.hackerearth.com/practice/algorithms/searching/binary-search/tutorial/
    Difficulty - Easy
*/

#include<iostream>
#include<algorithm>

using namespace std;

int binarySearch(int array[], int n, int x)
{
    int begin = 0, end = n - 1, mid;

    while(begin <= end)
    {
        mid = (begin + end)/2;

        if(array[mid] == x)
            return mid;

        else if(array[mid] < x)
            begin = mid + 1;

        else 
            end = mid - 1;
    }

    return -1;
}

int main()
{
    int n, array[100000], q;
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    sort(array, array + n);

    cin>>q;

    while(q-- != 0)
    {
        int x;
        cin>>x;

        int res = binarySearch(array, n, x);

        cout<<res + 1<<endl;
    }

}