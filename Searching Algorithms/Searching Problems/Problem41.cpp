/*
    Roof Top.
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
            cin>>array[i];
        }

        int max_steps = 0, current_steps = 0;
        for(int i = 1; i < n; i++)
        {
            if(array[i] > array[i - 1])
            {
                current_steps++;
            }

            else
            {
                current_steps = 0;
            }
             
            if(current_steps > max_steps)
            {
                max_steps = current_steps;
            }
        }

        cout<<max_steps<<endl;
    }
}