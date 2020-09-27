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
        int n;
        long long int b;
        cin>>n>>b;

        long long int *array = new long long int[n];
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