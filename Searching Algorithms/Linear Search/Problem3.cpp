/*
    Value equal to index value.
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
    public:
        vector<int> valueEqualToIndex(int array[], int n)
        {
            vector<int> vec;
            for(int i = 0; i < n; i++)
            {
                if((i+1) == array[i])
                {
                    vec.push_back(array[i]);
                }
            }
            return vec;
        }
};

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

        Solution s;
        auto res = s.valueEqualToIndex(array, n);
        if(res.empty())
        {
            cout<<"Not Found";
        }

        else
        {
            for(int x : res)
            {
                cout<<x<<" ";
            }
        }

        cout<<endl;
        
    }
}