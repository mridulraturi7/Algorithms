/*
    Bishu and Soldiers.
    This problem is taken from HackerEarth.
    Problem Statement - https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/bishu-and-soldiers/
    Difficulty - Easy
*/

#include<iostream>

using namespace std;

int main()
{
    int n, array[100000];
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    int rounds;
    cin>>rounds;

    while(rounds-- != 0)
    {
        int count = 0, sum = 0, power;
        cin>>power;
        for(int i = 0; i < n; i++)
        {
            if(array[i] <= power)
            {
                count++;
                sum += array[i];
            }
        }

        cout<<count<<" "<<sum<<endl;
    }

    return 0;
}
