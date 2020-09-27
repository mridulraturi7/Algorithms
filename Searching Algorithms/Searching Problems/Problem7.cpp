/*
    Find the element that appears once in sorted array.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array0624/1/?category[]=Searching&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]SearchingproblemStatusunsolveddifficulty[]-1page1
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int findOnce(int array[], int n)
        {
            int low = 0, high = n - 1;
            int res = 0;
            while(low <= high)
            {
                int mid = (low + high) / 2;

                if(low == high)
                {
                    res = array[low];
                    break;
                }
                
                if((mid % 2) == 0)
                {
                    if(array[mid] == array[mid + 1])
                    {
                        low = mid + 2;
                    }

                    else
                    {
                        high = mid;
                    }
                }

                else
                {
                    if(array[mid] == array[mid - 1])
                    {
                        low = mid + 1;
                    }

                    else
                    {
                        high = mid - 1;
                    }
                    
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
        cout<<s.findOnce(array, n)<<endl;
    }
}