/*
    Maximum Value in a Bitonic Array.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy

    Expected Time Complexity - O(logn)
    Expected Space Complexity - O(1)
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int findMaximum(int array[], int n)
        {
            if(array[0] > array[1])
            {
                return array[0];
            }

            if(array[n - 1] > array[n - 2])
            {
                return array[n - 1];
            }

            int l = 1, r = n - 2, res = 0;
            while(l <= r)
            {
                int mid = (l + r) / 2;

                if((array[mid] >= array[mid - 1]) && (array[mid] >= array[mid + 1]))
                {
                    res = array[mid];
                    break;
                }

                else if(array[mid + 1] > array[mid])
                {
                    l = mid + 1;
                }

                else
                {
                    r = mid - 1;
                }
            }
            return res;
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
        cout<<s.findMaximum(array, n)<<endl;
    }

    return 0;
}