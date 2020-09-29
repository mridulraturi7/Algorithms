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