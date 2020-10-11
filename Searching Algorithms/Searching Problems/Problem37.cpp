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
            int smallest = mat[0][0], largest = mat[n - 1][m - 1];
            if(x < smallest || x > largest)
            {
                return 0;
            }

            int i = 0, j = n - 1;
            while(i < n && j >= 0)
            {
                if(mat[i][j] == x)
                {
                    return 1;
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