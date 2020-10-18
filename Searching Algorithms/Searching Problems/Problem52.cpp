/*
    Missing Element of AP.
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int findMissing(int array[], int n)
        {
            int d, sum, current_sum = 0;
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