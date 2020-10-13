/*
    Two Repeated Elements.
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
        }

        for(int i = 0; i < n + 2; i++)
        {
            if(hash[array[i]] == 2)
            {
                cout<<array[i]<<" ";
                hash[array[i]] = 0;
            }
        }

        cout<<endl;
    }
}