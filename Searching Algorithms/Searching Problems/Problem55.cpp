/*
    Count Trailing Zeros in the factorial of a number.
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int countTrailingZeros(int n)
        {
            
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