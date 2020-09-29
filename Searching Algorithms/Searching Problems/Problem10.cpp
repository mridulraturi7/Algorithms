/*
    Last Index of One.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/last-index-of-1/0/?category[]=Searching&difficulty[]=-1&page=1&query=category[]Searchingdifficulty[]-1page1
    Difficulty - Basic
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        string s;
        cin>>s;

        int index = -1;

        for(int i = (s.length() - 1); i >= 0; i--)
        {
            if(s[i] == '1')
            {
                index = i;
                break;
            }
        }

        cout<<index<<endl;
    }
}