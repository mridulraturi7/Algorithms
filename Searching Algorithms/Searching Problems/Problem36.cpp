/*
    Search in a Matrix - Approach - 1 - Linear Search.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/search-in-a-matrix17201720/1/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy

    Time Complexity - O(n*n)
    Space Complexity - O(1)
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
    public:
        int matSearch(vector<vector<int>> &mat, int N, int M, int X)
        {
            for(int i = 0; i < N; i++)
            {
                for(int j = 0; j < M; j++)
                {
                    if(mat[i][j] == X)
                    {
                        return 1;
                    }
                }
            }

            return 0;
        }
};

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, m;
        cin>>n>>m;

        vector<vector<int>> arr(n, vector<int>(m));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin>>arr[i][j];
            }
        }

        int x;
        cin>>x;

        Solution ob;
        cout<<ob.matSearch(arr, n, m, x)<<endl;
    }
    
    return 0;
}