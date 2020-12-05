/*
    Print 1 to n without the help of loops.
*/

#include<iostream>

using namespace std;

void printNos(int n)
{
    static int count = 0;

    if(n == 0)
    {
        return;
    }

    cout<<++count<<" ";
    printNos(n - 1);
}

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