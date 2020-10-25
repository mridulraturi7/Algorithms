/*
    Intersection of two sorted arrays.
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
    public:
        vector<int> intersection(int array1[], int array2[], int n)
        {

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

        int *array1 = new int[n];
        int *array2 = new int[n];

        for(int i = 0; i < n; i++)
        {
            cin>>array1[i];
        }

        for(int i = 0; i < n; i++)
        {
            cin>>array2[i];
        }

        Solution ob;

        auto res = ob.intersection(array1, array2, n);

        if(res.size() == 0)
        {
            cout<<"-1"<<endl;
        }

        else
        {
            for(int i = 0; i < res.size(); i++)
            {
                cout<<res[i]<<" ";
            }
        }
        

    }
}