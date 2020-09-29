/*
    Remove consonants from a string.
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
        string str;
        cin.ignore();
        getline(cin, str);

        for(int i = 0; i < str.length(); i++)
        {
            if((str[i] == 'a' || str[i] == 'A') || (str[i] == 'e' || str[i] == 'E') || (str[i] == 'i' || str[i] == 'I') 
            || (str[i] == 'o' || str[i] == 'O') || (str[i] == 'u' || str[i] == 'U') || str[i] == ' ')
            {
                cout<<str[i];
            }
        }

        cout<<endl;
    }

    return 0;
}