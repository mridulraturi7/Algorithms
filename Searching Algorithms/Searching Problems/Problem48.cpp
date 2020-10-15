/*
    Maximum No. of 1's row.
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