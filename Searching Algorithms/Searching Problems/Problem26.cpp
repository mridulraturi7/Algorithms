/*
    Array subset of another array.
*/

#include<iostream>

using namespace std;

int check(int array1[], int m, int key)
{
    for(int i = 0; i < m; i++)
    {
        if(array1[i] == key)
        {
            return 1;
        }
    }

    return 0;
}

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

        int common = 0;

        for(int i = 0; i < n; i++)
        {
            int checkIfPresent = check(array1, m, array2[i]);
            common += checkIfPresent;
        }

        if(common == n)
        {
            cout<<"Yes"<<endl;
        }

        else
        {
            cout<<"No"<<endl;
        }
        
    }
}