/*
    Smallest Greater Elements in whole array.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/smallest-greater-elements-in-whole-array/0/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy
*/

#include<iostream>

using namespace std;

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

        for(int i = 0; i < n; i++)
        {
            int min_diff = 1000000, nextGreater = -1000001;
            for(int j = 0; j < n; j++)
            {
                if(array[j] > array[i])
                {
                    int current_diff = array[j] - array[i];
                    if(current_diff < min_diff)
                    {
                        min_diff = current_diff;
                        nextGreater = array[j];
                    }
                }
            }

            if(nextGreater == -1000001)
            {
                cout<<"_"<<" ";
            }

            else
            {
                cout<<nextGreater<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}