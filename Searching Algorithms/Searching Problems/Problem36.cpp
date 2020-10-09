/*
    Search in a Matrix.
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
    public:
        int matSearch(vector<vector<int>> &mat, int N, int M, int X)
        {

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