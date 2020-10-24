/*
    Common Elements - Approach 1 - Hashing.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/common-elements1132/1/?category[]=Searching&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]SearchingproblemStatusunsolveddifficulty[]0page1
    Difficulty - Easy

    
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
    public:
        vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int max1 = A[n1 - 1], max2 = B[n2 - 1], max3 = C[n3 - 1];

            int max = (max1 > max2) ? (max1 > max3 ? max1 : max3) : (max2 > max3 ? max2 : max3);

            int *hash = new int[max + 1] ();

            for(int i = 0; i < n1; i++)
            {
                hash[A[i]] = 1;
            }

            for(int i = 0; i < n2; i++)
            {
                if(hash[B[i]] == 1)
                {
                    hash[B[i]] = 2;
                }
            }

            for(int i = 0; i < n3; i++)
            {
                if(hash[C[i]] == 2)
                {
                    hash[C[i]] = 3;
                }
            }

            vector<int> res;

            for(int i = 0; i < n1; i++)
            {
                if(hash[A[i]] == 3)
                {
                    res.push_back(A[i]);
                    hash[A[i]] = 0;
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
        int n1, n2, n3;
        cin>>n1>>n2>>n3;

        int *A = new int[n1];
        int *B = new int[n2];
        int *C = new int[n3];

        for(int i = 0; i < n1; i++)
        {
            cin>>A[i];
        }

        for(int i = 0; i < n2; i++)
        {
            cin>>B[i];
        }

        for(int i = 0; i < n3; i++)
        {
            cin>>C[i];
        }

        Solution ob;

        auto res = ob.commonElements(A, B, C, n1, n2, n3);

        if(res.size() == 0)
        {
            cout<<"-1";
        }

        for(int i = 0; i < res.size(); i++)
        {
            cout<<res[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}