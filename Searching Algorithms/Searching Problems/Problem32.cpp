/*
    Maximum sum of increasing order elements from n arrays.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, m;
        cin>>n>>m;

        vector<vector<int>> vec(n, vector<int> (m));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin>>vec[i][j];
            }
        }

        int max_sum = 0;
        int max = *max_element(vec[n - 1].begin(), vec[n - 1].end());

        for(int i = n - 2; i >= 0; i--)
        {
            int current_max = *max_element(vec[i].begin(), vec[i].end());

            if(current_max < max)
            {
                max_sum += current_max;
                max = current_max;
            }

            else
            {
                max_sum = 0;
                break;
            }
            
        }

        cout<<max_sum<<endl;
    }

    return 0;
}