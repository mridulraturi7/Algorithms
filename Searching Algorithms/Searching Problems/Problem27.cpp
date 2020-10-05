/*
    Array subset of another array - Approach 1 - Hashing.
*/

#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int m, n;
        cin>>m>>n;

        int *array1 = new int[m];
        for(int i = 0; i < m; i++)
        {
            cin>>array1[i];
        }

        int *array2 = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array2[i];
        }

        unordered_map<int, int> hash;
        for(int i = 0; i < m; i++)
        {
            hash[array1[i]] = 1;
        }

        int allPresent = 1;

        for(int i = 0; i < n; i++)
        {
            if(hash.find(array2[i]) == hash.end())
            {
                allPresent = 0;
                cout<<"No"<<endl;
                break;
            }
        }

        if(allPresent == 1)
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}