/*
    Leaders in an Array - Approach 2 (Optimized).
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        scanf("%d", &n);

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }

        vector<int> leaders;

        int max = array[n - 1];
        leaders.push_back(max);

        for(int i = n - 2; i >= 0; i--)
        {
            if(array[i] >= max)
            {
                max = array[i];
                leaders.push_back(max);
            }
        }

        for(int i = leaders.size() - 1; i >= 0; i--)
        {
            printf("%d ", leaders[i]);
        }

        printf("\n");

    }

    return 0;
}