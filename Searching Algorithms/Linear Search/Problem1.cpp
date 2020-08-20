/*
    Last Occurrence
    This problem is taken from HackerEarth.
    Problem Statement - https://www.hackerearth.com/practice/algorithms/searching/linear-search/tutorial/
    Difficulty - Easy 
*/

#include<iostream>
using namespace std;

int linearSearch(int array[], int n, int x);

int main()
{
    int n, x, array[100000];
    cin>>n>>x;

    for(int i = 1; i <= n; i++)
    {
        cin>>array[i];
    }

    int res = linearSearch(array, n, x);
    cout<<res;

    return 0;
}

int linearSearch(int array[], int n, int x)
{
    for(int i = n; i >= 1; i--)
    {
        if(array[i] == x)
        {
            return i;
        }
    }
    return -1;
}