/*
    Subarray with given sum.
*/

#include<iostream>

using namespace std;

void findSum(int array[], int n, int s)
{
    for(int i = 0; i < n; i++)
    {
        int current_sum = 0;
        for(int j = i; j < n; j++)
        {
            current_sum += array[j];

            if(current_sum == s)
            {
                cout<<i + 1<<" "<<j + 1;
                return;
            }
        }
    }

    cout<<"-1";
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, s;
        cin>>n>>s;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        findSum(array, n, s);

        cout<<endl;
    }

    return 0;
}