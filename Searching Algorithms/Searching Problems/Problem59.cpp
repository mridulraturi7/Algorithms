/*
    Union of two sorted arrays.
    This problem is taken from GFG.
    Problem Statement - https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/
    Difficulty - Easy

    Time Complexity - O(m + n)
    Space Complexity - O(n)
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
    public:
        vector<int> findUnion(int array1[], int array2[], int m, int n)
        {
            int i = 0, j = 0;

            vector<int> res;

            while(i < m && j < n)
            {
                if(array1[i] < array2[j])
                {
                    res.push_back(array1[i]);
                    i++;
                }

                else if(array2[j] < array1[i])
                {
                    res.push_back(array2[j]);
                    j++;
                }

                else
                {
                    res.push_back(array1[i]);
                    i++;
                    j++;
                }
            }

            while(i < m)
            {
                res.push_back(array1[i]);
                i++;
            }

            while(j < n)
            {
                res.push_back(array2[j]);
                j++;
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
        int m, n;
        cin>>m>>n;

        int *array1 = new int[m];
        int *array2 = new int[n];

        for(int i = 0; i < m; i++)
        {
            cin>>array1[i];
        }

        for(int i = 0; i < n; i++)
        {
            cin>>array2[i];
        }

        Solution ob;
        auto res = ob.findUnion(array1, array2, m, n);

        if(res.size() == 0)
        {
            cout<<"-1";
        }

        else
        {
            for(int i = 0; i < res.size(); i++)
            {
                cout<<res[i]<<" ";
            }
        }

        cout<<endl;
    }
    return 0;
}