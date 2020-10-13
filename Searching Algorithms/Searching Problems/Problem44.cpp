/*
    Rotation.
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int findKRotation(int array[], int n)
        {
            int l = 0, r = n - 1;

            while(l <= r)
            {
                int mid = (l + r) / 2;
                if(l == r)
                {
                    return l;
                }

                else if(mid < r && array[mid] > array[mid + 1])
                {
                    return mid;
                }

                else if(mid > l && array[mid] < array[mid - 1])
                {
                    return mid - 1;
                }

                else if(array[l] >= array[mid])
                {
                    r = mid - 1;
                }

                else
                {
                    l = mid + 1;
                }
            }
            return n - 1;
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
        int pivot = ob.findKRotation(array, n);

        (pivot != n - 1) ? cout<<pivot + 1 : cout<<"0";
        cout<<endl;
    }
}