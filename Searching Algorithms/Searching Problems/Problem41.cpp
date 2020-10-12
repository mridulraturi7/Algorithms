/*
    Roof Top.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/roof-top/0/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
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

        int max_steps = 0, current_steps = 0;
        for(int i = 1; i < n; i++)
        {
            if(array[i] > array[i - 1])
            {
                current_steps++;
            }

            else
            {
                current_steps = 0;
            }
             
            if(current_steps > max_steps)
            {
                max_steps = current_steps;
            }
        }

        cout<<max_steps<<endl;
    }

    return 0;
}