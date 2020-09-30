/*
    Missing Number in an Array.
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int missingNumber(int array[], int n)
        {
            int total_sum, current_sum = 0;
            total_sum = (n * (n + 1)) / 2;
            for(int i = 0; i < n - 1; i++)
            {
                current_sum += array[i];
            }

            return total_sum - current_sum;
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

        int *array = new int[n - 1];
        for(int i = 0; i < n - 1; i++)
        {
            cin>>array[i];
        }

        Solution s;
        cout<<s.missingNumber(array, n)<<endl;
    }

    return 0;
}