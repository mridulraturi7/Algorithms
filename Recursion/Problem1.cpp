/*
    Print 1 to n without the help of loops.
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        printNos(n);
    }

    return 0;
}