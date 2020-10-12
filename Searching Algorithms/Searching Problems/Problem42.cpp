/*
    Find the closest pair from two arrays.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, m;
        cin>>n>>m;

        int *A = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>A[i];
        }

        int *B = new int[m];
        for(int i = 0; i < m; i++)
        {
            cin>>B[i];
        }

        int x;
        cin>>x;

        int min_difference = 500, minA, minB;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                int sum = A[i] + B[j];
                int current_diff = abs(x - sum);
                if(current_diff < min_difference || current_diff == min_difference && A[i] < minA)
                {
                    min_difference = current_diff;
                    minA = A[i];
                    minB = B[j];
                }
            }
        }

        cout<<minA<<" "<<minB<<endl;
    }

    return 0;
}