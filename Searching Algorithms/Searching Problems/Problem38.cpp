/*
    Number and the Digit Sum.
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        long long int numberCount(long long int N, long long int K)
        {
            long long int l = 1, r = N, count = 0;
            while(l <= r)
            {
                long long int current_digit = (l + r) / 2;
                long long int difference, prev_difference;
                difference = current_digit - digitSum(current_digit);

                if(difference >= K)
                {
                    r = current_digit - 1;
                    prev_difference = r - digitSum(r);
                    if(prev_difference < K)
                    {
                        return (N - current_digit) + 1;
                    }
                }

                else if(difference < K)
                {
                    l = current_digit + 1;
                }
            }

            return 0;
        }

        long long int digitSum(long long int num)
        {
            int sum = 0;
            while(num != 0)
            {
                sum += (num % 10);
                num /= 10;
            }

            return sum;
        }
};

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        long long int N, K;
        cin>>N>>K;

        Solution ob;
        cout<<ob.numberCount(N, K)<<endl;
    }

    return 0;
}