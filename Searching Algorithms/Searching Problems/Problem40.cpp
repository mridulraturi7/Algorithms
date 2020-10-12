/*
    Replace by X.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/replace-by-x/0/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy
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
        string str, pattern;
        cin>>str>>pattern;

        int len_pattern = pattern.length();
        int len_str = str.length();

        int i = 0;
        while(i <= (len_str - len_pattern))
        {
            string sub = str.substr(i, len_pattern);
            if(sub == pattern)
            {
                str.replace(i, len_pattern, "X");
                len_str = str.length();
            }
            i++;
        }

        for(int j = 0; j < len_str - 1; j++)
        {
            if(str[j] == 'X' && str[j + 1] == 'X')
            {
                str.erase(str.begin() + j);
                j--;
            }
        }

        cout<<str<<endl;
    }

    return 0;
}