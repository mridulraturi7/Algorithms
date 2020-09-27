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

        int final_value = b;
        for(int i = 0; i < n; i++)
        {
            if(array[i] == final_value)
            {
                final_value *= 2;
            }
        }

        cout<<final_value<<endl;
    }

    return 0;
}