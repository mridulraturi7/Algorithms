/*
    Remove consonants from a string.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/c-program-to-remove-consonants-from-a-string/0/?category[]=Searching&problemStatus=unsolved&difficulty[]=-1&page=1&query=category[]SearchingproblemStatusunsolveddifficulty[]-1page1
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
        string str;
        cin.ignore();
        getline(cin, str);
        
        int vowels = 0;

        for(int i = 0; i < str.length(); i++)
        {
            if((str[i] == 'a' || str[i] == 'A') || (str[i] == 'e' || str[i] == 'E') || (str[i] == 'i' || str[i] == 'I') 
            || (str[i] == 'o' || str[i] == 'O') || (str[i] == 'u' || str[i] == 'U'))
            {
                vowels = 1;
                cout<<str[i];
            }
            
            else if(str[i] == ' ')
            {
                cout<<str[i];
            }
        }
        
        if(vowels == 0)
        {
            cout<<"No Vowel";
        }

        cout<<endl;
    }

    return 0;
}