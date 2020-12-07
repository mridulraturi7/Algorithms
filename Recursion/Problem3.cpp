/*
    Tower of Hanoi.
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        long long toh(int N, int from, int to, int aux)
        {
            if(N <= 0)
            {
                return 0;
            }

            static long long moves = 0;

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
        int n;
        cin>>n;

        Solution ob;

        cout<<ob.toh(n, 1, 3, 2)<<endl;
    }

    return 0;
}