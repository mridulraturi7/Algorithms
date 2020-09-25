/*
    Number of Occurrence.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1/?category[]=Searching&difficulty[]=-1&page=1&query=category[]Searchingdifficulty[]-1page1
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int count(int array[], int n, int x)
        {
            int loc = binarySearch(array, x, 0, n - 1);

            if(loc == -1)
            {
                return 0;
            }

            int count = 1, left = loc - 1, right = loc + 1;

            while(left >= 0 && array[left] == x)
            {
                count++;
                left--;
            }

            while(right < n && array[right] == x)
            {
                count++;
                right++;
            }

            return count;
        }

        int binarySearch(int array[], int item, int low, int high)
        {
            if(low <= high)
            {
                int mid = (low + high) / 2;

                if(array[mid] == item)
                {
                    return mid;
                }

                else if(item < array[mid])
                {
                    return binarySearch(array, item, low, mid - 1);
                }

                else
                {
                    return binarySearch(array, item, mid + 1, high);   
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
        int n, x;
        cin>>n>>x;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        Solution s;
        cout<<s.count(array, n, x)<<endl;
    }

    return 0;
}