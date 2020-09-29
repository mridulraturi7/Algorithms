/*
    Search an element in an Array.
*/

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, k;
        cin>>n;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        cin>>k;

        int index = -1;
        for(int i = 0; i < n; i++)
        {
            if(array[i] == k)
            {
                index = i;
                break;
            }
        }

        cout<<index<<endl;
    }

    return 0;
}