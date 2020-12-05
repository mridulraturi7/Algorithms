/*
    Print 1 to n without the help of loops.
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