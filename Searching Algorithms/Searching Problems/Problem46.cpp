/*
    Two Repeated Elements - Approach 2 - Array Indexing.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/two-repeated-elements/0/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy

    Time Complexity - O(n)
    Space Complexity - O(1)
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        int *array = new int[n + 3];
        for(int i = 1; i <= n + 2; i++)
        {
            cin>>array[i];
        }

        for(int i = 1; i <= n + 2; i++)
        {
            if(array[abs(array[i])] > 0)
            {
                array[abs(array[i])] *= -1;
            }
            
            else
            {
                cout<<abs(array[i])<<" ";
            }
        }

        cout<<endl;
    }
    
    return 0;
}