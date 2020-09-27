/*
    Doubling the Value.
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, b;
        cin>>n>>b;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        for(int i = 0; i < n; i++)
        {
            if(array[i] == b)
            {
                b *= 2;
            }
        }

        cout<<b<<endl;
    }

    return 0;
}