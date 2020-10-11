/*
    Search in a Matrix - Approach 2
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
    public:
        int matSearch(vector<vector<int>> &mat, int n, int m, int x)
        {
            int row, col;
            for(int i = 0; i < n; i++)
            {
                if(mat[i][0] == x)
                {
                    return 1;
                }

                else if(mat[i][0] < x)
                {
                    row = i;
                }

                else
                {
                    break;
                }
                
            }

            for(int j = 0; j < m; j++)
            {
                if(mat[row][j] == x)
                {
                    return 1;
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