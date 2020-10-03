/*
    Counting elements in two arrays (Second Approach - Using Divide and Conquer - Modified Binary Search - 
    Optimized Solution).
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/counting-elements-in-two-arrays/1/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy

    Expected Time Complexity - O((m + n) * logn)
    Expected Space Complexity - O(1)
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int findLastIndex(int array2[], int n, int key)
{
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int mid = (l + r) / 2;

        if(array2[mid] <= key)
        {
            l = mid + 1;
        }

        else
        {
            r = mid - 1;
        }
    }

    return r + 1;
}

vector<int> countEleLessThanOrEqual(int array1[], int array2[], int m, int n)
{
    sort(array2, array2 + n);

    vector<int> res;

    for(int i = 0; i < m; i++)
    {
        res.push_back(findLastIndex(array2, n, array1[i]));
    }

    return res;
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int m, n;
        cin>>m>>n;

        int *array1 = new int[m];
        for(int i = 0; i < m; i++)
        {
            cin>>array1[i];
        }

        int *array2 = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array2[i];
        }

        vector<int> res = countEleLessThanOrEqual(array1, array2, m, n);

        for(int i = 0; i < res.size(); i++)
        {
            cout<<res[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}