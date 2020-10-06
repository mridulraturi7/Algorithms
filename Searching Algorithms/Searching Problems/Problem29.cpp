/*
    Leaders in an Array.
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

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>n;
        }

        for(int i = 0; i < n - 1; i++)
        {
            bool leader = true;
            for(int j = i + 1; j < n; j++)
            {
                if(array[j] > array[i])
                {
                    leader = false;
                    break;
                }
            }

            if(leader)
            {
                cout<<array[i]<<" ";
            }
        }

        cout<<array[n - 1]<<endl;
    }
}