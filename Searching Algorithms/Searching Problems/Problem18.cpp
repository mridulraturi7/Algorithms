/*
    Find Transition Point.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/find-transition-point-1587115620/1/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy

    Expected Time Complexity - O(logn)
    Expected Space Complexity - O(1)
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int transitionPoint(int array[], int n)
        {
            if(array[0] == 1)
            {
                return 0;
            }

            if(array[n - 1] == 0)
            {
                return -1;
            }

            int l = 0, r = n - 1;
            while(l <= r)
            {
                int mid = (l + r) / 2;

                if(array[mid] == 1 && array[mid - 1] == 0)
                {
                    return mid;
                }

                else if(array[mid] == 1)
                {
                    r = mid - 1;
                }

                else
                {
                    l = mid + 1;
                }
            }

            return -1;
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
        cout<<s.transitionPoint(array, n)<<endl;
    }

    return 0;
}