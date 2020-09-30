/*
    Value equal to index value.
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n)
    {
	    vector<int> vec;
        for(int i = 0; i < n; i++)
        {
            if((i+1) == arr[i])
            {
                vec.push_back(arr[i]);
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
        auto ans = s.valueEqualToIndex(array, n);
        if(ans.empty())
        {
            cout<<"Not Found";
        }

        else
        {
            for(int x : ans)
            {
                cout<<x<<" ";
            }
        }

        cout<<endl;
        
    }
}