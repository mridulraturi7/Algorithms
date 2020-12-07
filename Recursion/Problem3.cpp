/*
    Tower of Hanoi.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/0/?category[]=Recursion&difficulty[]=-1&page=1&query=category[]Recursiondifficulty[]-1page1#
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

class Solution
{
    public:

        long long moves = 0;

        long long toh(int N, int from, int to, int aux)
        {
            if(N <= 0)
            {
                return 0;
            }

            moves++;

            toh(N - 1, from, aux, to);
            cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
            toh(N - 1, aux, to, from);

            return moves;
        }
};

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        long long moves;

        int n;
        cin>>n;

        Solution ob;

        moves = ob.toh(n, 1, 3, 2);

        cout<<moves<<endl;
    }

    return 0;
}