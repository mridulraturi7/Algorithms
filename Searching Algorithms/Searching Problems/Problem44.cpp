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
            int l = 0, r = n - 1, rotation_point = 0;

            while(l <= r)
            {
                int mid = (l + r) / 2;
                if(l == r)
                {
                    rotation_point = l + 1;
                    break;
                }

                else if(mid < r && array[mid] > array[mid + 1])
                {
                    rotation_point = mid + 1;
                    break;
                }

                else if(mid > l && array[mid] < array[mid - 1])
                {
                    rotation_point = mid;
                    break;
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
            
            if(rotation_point == n)
            {
                return 0;
            }
            
            return rotation_point;
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
        auto res = ob.findKRotation(array, n);
        cout<<res<<endl;
    }
}