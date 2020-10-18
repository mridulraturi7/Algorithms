/*
    Missing Element of AP.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/missing-element-of-ap2228/1/?category[]=Searching&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]SearchingproblemStatusunsolveddifficulty[]0page1
    Difficulty - Easy
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int findMissing(int array[], int n)
        {
            long int d, sum, current_sum = 0;
            d = (array[n - 1] - array[0]) / n;

            sum = ((n + 1) * (2 * array[0] + (n * d))) / 2;

            for(int i = 0; i < n; i++)
            {
                current_sum += array[i];
            }

            return (sum - current_sum);
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

        Solution ob;
        cout<<ob.findMissing(array, n)<<endl;
    }

    return 0;
}