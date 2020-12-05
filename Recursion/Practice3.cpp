/*
    Find all paths in a n * m grid from (0,0) to (n,m). You can move only in right or bottom direction.
*/

#include<iostream>

using namespace std;

int findPaths(int n, int m)
{
    if(n == 1 || m == 1)
    {
        return 1;
    }

    return findPaths(n, m - 1) + findPaths(n - 1, m);
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, m;
        cin>>n>>m;

        cout<<findPaths(n, m)<<endl;
    }

    return 0;
}