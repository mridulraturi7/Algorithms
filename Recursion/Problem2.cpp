/*
    Number of Paths.
*/

#include<iostream>

using namespace std;

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