/*
    Count the Zeros.
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int countZeroes(int array[], int n)
        {
            if(arr[0] == 0)
            {
                return n;
            }
        
            else if(arr[n - 1] == 1)
            {
                return 0;
            }

            int left = 0, right = n - 1;
            while(left <= right)
            {
                int mid = (left + right) / 2;

                if((left == right) && (array[mid] == 0))
                {
                    return (n - mid);
                }

                else if(array[mid] == 1)
                {
                    left = mid + 1;
                }

                else
                {
                    right = mid - 1;
                }   
            }
            return 0;
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
        cout<<s.countZeroes(array, n)<<endl;
    }

    return 0;
}