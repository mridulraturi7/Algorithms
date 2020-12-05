/*
    Number of Paths.
*/

#include<iostream>

using namespace std;

int numberOfPaths(int m, int n)
{
    if(m == 1 || n == 1)
    {
        return 1;
    }

    return numberOfPaths(m, n - 1) + numberOfPaths(m - 1, n);
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int m, n;
        cin>>m>>n;

        cout<<numberOfPaths(m, n)<<endl;
    }

    return 0;
}