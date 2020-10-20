/*
    Smallest Factorial Number.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/smallest-factorial-number5929/1/?category[]=Searching&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]SearchingproblemStatusunsolveddifficulty[]0page1#
    Difficulty - Easy

    Expected Time Complexity - O(log(base2)n * log(base5)n)
    Expected Space Complexity - O(1)
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int findNum(int n)
        {
            if(n == 1)
            {
                return 5;
            }

            int l = 0, r = 5 * n;
            while(l < r)
            {
                int mid = (l + r) / 2;

                if(checkTrailingZeros(mid, n))
                {
                    r = mid;
                }

                else
                {
                    l = mid + 1;
                }
            }

            return l;
        }

        bool checkTrailingZeros(int num, int zeros)
        {
            int count = 0;
            for(int i = 5; num / i >= 1; i *= 5)
            {
                count += num / i;
            }

            if(count >= zeros)
            {
                return true;
            }

            return false;
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
        cout<<ob.findNum(n)<<endl;
    }

    return 0;
}