/*
    Facing the Sun.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/facing-the-sun2126/1/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy
*/

#include<iostream>

using namespace std;

int countBuildings(int array[], int n)
{
    int left_most = array[0], count = 1;
    for(int i = 1; i < n; i++)
    {
        if(array[i] > left_most)
        {
            count++;
            left_most = array[i];
        }
    }

    return count;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        int buildings = countBuildings(array, n);
        cout<<buildings<<endl;
    }

    return 0;
}