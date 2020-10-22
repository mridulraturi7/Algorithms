/*
    Common Elements.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/common-elements1132/1/?category[]=Searching&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]SearchingproblemStatusunsolveddifficulty[]0page1
    Difficulty - Easy
*/

#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution
{
    public:
        vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> commonAB;
            int i = 0, j = 0;
            while(i < n1 &&  j < n2)
            {
                if(A[i] < B[j])
                {
                    i++;
                }

                else if(B[j] < A[i])
                {
                    j++;
                }

                else
                {
                    commonAB.push_back(A[i]);
                    i++;
                    j++;
                }
            }

            vector<int> commonAll;
            int k = 0, l = 0;
            while(k < commonAB.size() && l < n3)
            {
                if(commonAB[k] < C[l])
                {
                    k++;
                }

                else if(C[l] < commonAB[k])
                {
                    l++;
                }

                else
                {
                    commonAll.push_back(commonAB[k]);
                    k++;
                    l++;
                }
            }

            map<int, int> final;
            for(int i = 0; i < commonAll.size(); i++)
            {
                final[commonAll[i]]++;
            }

            vector<int> res;

            for(auto i : final)
            {
                res.push_back(i.first);
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