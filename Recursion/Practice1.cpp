/*
    Sum of first n natural numbers.
*/

#include<iostream>

using namespace std;

int sum(int n)
{
    if(n == 1)
    {
        return 1;
    }

    return n + sum(n - 1);
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        cout<<sum(n)<<endl;
    }

    return 0;
}