/*
    Two Repeated Elements - Approach 1 - Hashing.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/two-repeated-elements/0/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy

    Time Complexity - O(n)
    Space Complexity - O(n) 
*/

#include<iostream>
#include<map>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        int *array = new int[n + 2];
        for(int i = 0; i < n + 2; i++)
        {
            cin>>array[i];
        }

        map<int, int> hash;

        for(int i = 0; i < n + 2; i++)
        {
            hash[array[i]]++;
            
            if(hash[array[i]] > 1)
            {
                printf("%d ", array[i]);
            }
        }

        cout<<endl;
    }

    return 0;
}