/*
    Find triplets with zero sum.
*/

#include<iostream>
#include<algorithm>

using namespace std;

bool findTriplet(int array[], int n)
{
    sort(array, array + n);
    for(int i = 0; i < n; i++)
    {
        int l = i + 1, r = n - 1;
        while(l < r)
        {
            int sum = array[i] + array[l] + array[r];
            if(sum == 0)
            {
                return true;
            }

            else if(sum < 0)
            {
                l++;
            }

            else
            {
                r--;
            }
        }
    }

    return false;
}

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

        if(findTriplet(array, n))
        {
            cout<<"1"<<endl;
        }

        else
        {
            cout<<"0"<<endl;
        }
    }

    return 0;
}