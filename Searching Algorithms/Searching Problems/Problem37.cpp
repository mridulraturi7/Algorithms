/*
    Search in a Matrix - Approach 2 (Optimized).
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/search-in-a-matrix17201720/1/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy

    Expected Time Complexity - O(n + m)
    Expected Space Complexity - O(1)
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
    public:
        int matSearch(vector<vector<int>> &mat, int n, int m, int x)
        {
            int smallest = mat[0][0], largest = mat[n - 1][m - 1], found = 0;
            if(x < smallest || x > largest)
            {
                return found;
            }

            int i = 0, j = m - 1;
            while(i < n && j >= 0)
            {
                if(mat[i][j] == x)
                {
                    found = 1;
                    break;
                }

                else if(mat[i][j] < x)
                {
                    i++;
                }

                else
                {
                    j--;
                }
            }

            return found;
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

        vector<vector<int>> array(n, vector<int> (m));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin>>array[i][j];
            }
        }

        int x;
        cin>>x;

        Solution ob;
        cout<<ob.matSearch(array, n, m, x)<<endl;
    }

    return 0;
}