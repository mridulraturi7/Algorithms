/*
    Element appearing once.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/element-appearing-once2552/1/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        int search(int array[], int n)
        {
            if(array[0] != array[1])
	        {
	            return array[0];
	        }
	    
	        else if(array[n - 2] != array[n - 1])
	        {
	            return array[n - 1];
	        }
	    
	        int l = 1, r = n - 2, res;
            
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