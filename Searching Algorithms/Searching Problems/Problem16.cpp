/*
    Count the Zeros.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/count-the-zeros2550/1/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy

    Expected Time Complexity - O(logn)
    Expected Space Complexity - O(1)
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int countZeroes(int array[], int n)
        {
            if(array[0] == 0)
            {
                return n;
            }
        
            else if(array[n - 1] == 1)
            {
                return 0;
            }

            int left = 0, right = n - 1;
            while(left <= right)
            {
                int mid = (left + right) / 2;

                if((array[mid] == 0) && (array[mid - 1] != 0))
                {
                    return (n - mid);
                }

                else if(array[mid] == 1)
                {
                    left = mid + 1;
                }

                else
                {
                    right = mid - 1;
                }   
            }
            return 0;
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
        cout<<s.countZeroes(array, n)<<endl;
    }

    return 0;
}