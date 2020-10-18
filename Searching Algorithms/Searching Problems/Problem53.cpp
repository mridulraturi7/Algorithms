/*
    Missing Element of AP.
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int findMissing(int array[], int n)
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

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        Solution ob;
        cout<<ob.findMissing(array, n)<<endl;
    }

    return 0;
}