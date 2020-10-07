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

        int max = *max_element(vec[n - 1].begin(), vec[n - 1].end());
        int max_sum = max, initial_max = max;

        for(int i = n - 2; i >= 0; i--)
        {
            int current_max = 0;

            for(int j = 0; j < m; j++)
            {
                if(vec[i][j] > current_max && vec[i][j] < max)
                {
                    current_max = vec[i][j];
                }
            }

            if(current_max != 0)
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