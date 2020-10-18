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
            int c_d = (array[n - 1] - array[0]) / n;
            int l = 0, r = n - 1;

            while(l <= r)
            {
                int mid = (l + r) / 2;
                int expected_element = (array[0] + (mid * c_d));

                if(array[mid] != expected_element && array[mid - 1] == (expected_element - c_d))
                {
                    return expected_element;
                }

                else if(array[mid] == expected_element)
                {
                    l = mid + 1;
                }

                else
                {
                    r = mid - 1;
                }
            }

            return -1;
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