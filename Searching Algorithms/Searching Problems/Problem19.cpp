/*
    Good Pairs.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/good-pairs/0/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        int *array = new int[n + 1];
        for(int i = 1; i <= n; i++)
        {
            cin>>array[i];
        }

        int pairs = 0;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(array[i] < array[j])
                {
                    pairs++;
                }
            }
        }

        cout<<pairs<<endl;
    }

    return 0;
}