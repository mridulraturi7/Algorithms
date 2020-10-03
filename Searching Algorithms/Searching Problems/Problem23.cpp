/*
    Counting elements in two arrays.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/counting-elements-in-two-arrays/1/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy

    Expected Time Complexity - O((m + n) * logn)
    Expected Space Complexity - O(1)

    The following solution is not optimized as it leverages Hashing Techniquw which ultimately increases its
    space complexity to O(n);
*/

#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>

using namespace std;

vector<int> countEleLessThanOrEqual(int array1[], int array2[], int m, int n)
{
    int max = *max_element(array2, array2 + n);
    int *hash = new int[max + 1] ();
    for(int i = 0; i < n; i++)
    {
        hash[array2[i]]++;
    }

    vector<int> res(m);
    for(int i = 0; i < m; i++)
    {
        int sum = 0;
        if(array1[i] > max)
        {
            res[i] = n;
        }
        else
        {
            res[i] = accumulate(hash, hash + array1[i] + 1, sum);   
        }
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