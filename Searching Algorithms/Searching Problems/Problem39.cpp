/*
    Element appearing once.
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int search(int array[], int n)
        {
            int l = 0, r = n - 1, res;
            while(l <= r)
            {
                int mid = (l + r) / 2;

                if(array[mid] != array[mid - 1] && array[mid] != array[mid + 1])
                {
                    res = array[mid];
                    break;
                }

                else if(mid % 2 == 0)
                {
                    if(array[mid + 1] == array[mid])
                    {
                        l = mid + 1;
                    }

                    else
                    {
                        r = mid - 1;
                    }
                }

                else if(mid % 2 != 0)
                {
                    if(array[mid - 1] == array[mid])
                    {
                        l = mid + 1;
                    }

                    else
                    {
                        r = mid - 1;
                    }
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

        Solution ob;
        cout<<ob.search(array, n)<<endl;
    }

    return 0;
}