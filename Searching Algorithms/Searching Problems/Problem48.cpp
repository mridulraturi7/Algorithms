/*
    Maximum No. of 1's row.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/maximum-no-of-1s-row3027/1/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy

    Time Complexity  - O(n*logm)
    Space Complexity - O(1)
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
    public:
        int maxOnes(vector<vector<int>> &mat, int n, int m)
        {
            int max_row_zero = 0, row = -1;

            for(int i = 0; i < n; i++)
            {
                int l = 0, r = n - 1;
                int current_row_zero = 0;

                if(mat[i][0] == 1)
                {
                    return i;
                }

                while(l <= r)
                {
                    int mid = (l + r) / 2;

                    if(mat[i][mid] == 1 && mat[i][mid - 1] == 0)
                    {
                        current_row_zero = (m - mid) + 1;
                        break;
                    }
                    
                    else if(mat[i][mid] == 0)
                    {
                        l = mid + 1;
                    }

                    else
                    {
                        r = mid - 1;
                    }
                }

                if(current_row_zero > max_row_zero)
                {
                    max_row_zero = current_row_zero;
                    row = i;
                }
            }
            
            return row;
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

        vector<vector<int>> arr(n, vector<int> (m));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin>>arr[i][j];
            }
        }

        Solution ob;
        cout<<ob.maxOnes(arr, n, m)<<endl;
    }

    return 0;
}