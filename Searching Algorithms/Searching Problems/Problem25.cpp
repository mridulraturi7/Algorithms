/*
    Facing the Sun.
*/

#include<iostream>

using namespace std;

int countBuildings(int array[], int n)
{
    int left_most = array[0], count = 1;
    for(int i = 1; i < n; i++)
    {
        if(array[i] >= left_most)
        {
            count++;
        }
    }

    return count;
}

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

        int buildings = countBuildings(array, n);
        cout<<buildings<<endl;
    }

    return 0;
}