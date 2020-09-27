/*
    Find the element that appears once in sorted array.
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int findOnce(int array[], int n)
        {
            int low = 0, high = n - 1;
            int res = 0;
            while(low <= high)
            {
                int mid = (low + high) / 2;
                int element_left = (array[mid] == array[mid - 1]) ? (high - mid + 1) : (high - mid);
                int element_right = (array[mid] == array[mid + 1]) ? (high - mid + 1) : (high - mid);

                if((array[mid] != array[mid - 1]) && (array[mid] != array[mid + 1]))
                {
                    res = array[mid];
                    break;
                }

                else if((element_left % 2) != 0)
                {
                    high = mid - 1;
                }

                else
                {
                    low = mid + 1;
                }
            }
            return res;
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
        cout<<s.findOnce(array, n)<<endl;
    }
}