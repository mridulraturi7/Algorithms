/*
    Count Trailing Zeros in the factorial of a number.
    This problem is taken from GFG.
    Problem Statement - https://www.geeksforgeeks.org/count-trailing-zeroes-factorial-number/
    Difficulty - Easy
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int countTrailingZeros(int n)
        {
            //Trailing zeros is always produced by 2 and 5.
            //Number of zeroes in the factorial of a number is equal to the number of 5 in the prime factor of n!.

            int count = 0;
            for(int i = 5; n / i >= 1; i *= 5)
            {
                count += (n / i);
            }

            return count;
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

        Solution ob;
        cout<<ob.countTrailingZeros(n)<<endl;
    }

    return 0;
}