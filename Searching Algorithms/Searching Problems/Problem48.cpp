/*
    Maximum No. of 1's row.
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
    public:
        int maxOnes(vector<vector<int>> &mat, int n, int m)
        {
            int max_row_zero = 0, row = 0;
            for(int i = 0; i < n; i++)
            {
                int l = mat[i][0], r = mat[i][m - 1];
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
                        current_row_zero = mat[i][mid];
                        break;
                    }
                    
                    else if(mat[i][mid - 1] == 1)
                    {
                        r = mid - 1;
                    }

                    else
                    {
                        l = mid + 1;
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
}