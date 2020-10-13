/*
    Two Repeated Elements.
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

        int *array = new int[n + 3];
        for(int i = 1; i <= n + 2; i++)
        {
            cin>>array[i];
        }

        for(int i = 1; i <= n + 2; i++)
        {
            array[array[i]] = -1 * array[i];
        }

        for(int i = 1; i <= n; i++)
        {
            if(array[i] > 0)
            {
                cout<<array[i]<<" ";
            }
        }

        cout<<endl;
    }
}