/*
    Subarray with given sum.
*/

#include <iostream>

using namespace std;

void findSum(int array[], int n, int s)
{
    int sum = 0, start = 0, last = 0;
    bool found = false;
    for(int i = 0; i < n; i++)
    {
        sum += array[i];
        
        while(sum > s)
        {
            sum -= array[start];
            start++;
        }

        if(sum == s)
        {
            found = true;
            last = i;
            break;
        }
    }

    if(found)
    {
        cout<<(start + 1)<<" "<<(last +1);
    }

    else
    {
        cout<<"-1";
    }
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