/*
    Elements in the Range.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/elements-in-the-range2834/1/?category[]=Searching&difficulty[]=-1&page=1&query=category[]Searchingdifficulty[]-1page1
    Difficulty - Basic
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
        bool checkElements(int array[], int n, int A, int B)
        {
            int count = 0;
            for(int i = A; i <= B; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    if(array[j] == i)
                    {
                        count++;
                        break;
                    }
                }
            }

            if(count == (B - A + 1))
            {
                return true;
            }
            return false;
        }
};

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n, A, B;
        cin>>n>>A>>B;

        int *array = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i];
        }

        Solution s;

        if(s.checkElements(array, n, A, B))
        {
            cout<<"Yes"<<endl;
        }

        else
        {
            cout<<"No"<<endl;
        }
    }

    return 0;
}