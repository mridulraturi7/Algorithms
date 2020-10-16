/*
    Subarray with given sum.
*/

#include<iostream>
#include<vector>

using namespace std;

void findSum(int array[], int n, int s)
{
    //vector<int> current_status;
    int sum = 0, start = 0, last = 0;
    bool found = false;
    for(int i = 0; i < n; i++)
    {
        sum += array[i];

        //current_status.push_back(array[i]);

/*
        if(sum > s)
        {
            //current_status.push_back(array[i]);
            //sum -= current_status[start];
            //start++;
            while(sum > s)
            {
                
            }
        }
*/
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