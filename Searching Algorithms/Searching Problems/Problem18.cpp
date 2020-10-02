/*
    Find Transition Point.
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int transitionPoint(int array[], int n)
        {
            if(array[0] == 1)
            {
                return 0;
            }

            if(array[n - 1] == 0)
            {
                return -1;
            }

            int l = 1, r = n - 2;
            while(l <= r)
            {
                int mid = (l + r) / 2;

                if(array[mid] == 1 && array[mid - 1] == 0)
                {
                    return mid;
                }

                else if(array[mid] == 1)
                {
                    r = mid - 1;
                }

                else
                {
                    l = mid + 1;
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

        Solution s;
        cout<<s.transitionPoint(array, n)<<endl;
    }

    return 0;
}