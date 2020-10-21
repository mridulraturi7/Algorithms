/*
    Common Elements.
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
    }

    return 0;
}