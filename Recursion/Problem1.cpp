/*
    Print 1 to n without the help of loops.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1/?category[]=Recursion&difficulty[]=-2&page=1&query=category[]Recursiondifficulty[]-2page1#
    Difficulty - School
*/

#include<iostream>

using namespace std;

void printNos(int n)
{
    if(n == 0)
    {
        return;
    }

    printNos(n - 1);
    cout<<n<<" ";
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

        cout<<endl;
    }

    return 0;
}