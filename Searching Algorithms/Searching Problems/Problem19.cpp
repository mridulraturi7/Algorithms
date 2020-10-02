/*
    Good Pairs.
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

        int *array = new int[n + 1];
        for(int i = 1; i <= n; i++)
        {
            cin>>array[i];
        }

        int pairs = 0;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(array[i] < array[j])
                {
                    pairs++;
                }
            }
        }

        cout<<pairs<<endl;
    }

    return 0;
}