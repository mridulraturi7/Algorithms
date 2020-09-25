/*
    Count Zeroes in a Sorted Matrix.
*/

#include<iostream>

using namespace std;

#define MAX 1001

int countZeros(int A[MAX][MAX], int n);

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        int A[MAX][MAX];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin>>A[i][j];
            }
        }

        cout<<countZeros(A, n)<<endl;
    }

    return 0;
}

int countZeros(int A[MAX][MAX], int n)
{
    int zeros = 0;
    for(int i = 0; i < n; i++)
    {
        int j = n - 1;
        while(A[i][j] != 0)
        {
            j--;
        }

        zeros += (j + 1);
    }

    return zeros;
}