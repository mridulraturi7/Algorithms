/*
    Second Largest.
    This problem is taken from GeeksforGeeks.
    Problem Statement - https://practice.geeksforgeeks.org/problems/second-largest3735/1
    Difficulty - School
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int print2Largest(int array[], int n)
        {
            int max1 = 0, max2 = -1;

            for(int i = 0; i < n; i++)
            {
                if(array[i] > max1)
                {
                    max1 = array[i];
                }
            }

            for(int i = 0; i < n; i++)
            {
                if(array[i] > max2 && array[i] != max1)
                {
                    max2 = array[i];
                }
            }

            return max2;
        }
};

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        Solution s;
        int res = s.print2Largest(array, n);

        cout<<res<<endl;
    }

    return 0;
}