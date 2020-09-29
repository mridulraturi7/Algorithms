/*
    Last Index of One.
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

        for(int i = (s.length() - 1); i >= 0; i--)
        {
            if(s[i] == '1')
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}