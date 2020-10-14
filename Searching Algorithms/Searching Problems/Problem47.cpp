/*
    Two Repeated Elements - Approach 3 - Using Mathematical Formula.
*/

#include<iostream>
#include<cmath>

using namespace std;

int fact(int x)
{
    int f = 1;
    for(int i = x; i > 0; i--)
    {
        f *= i;
    }

    return f;
}

void findRepeating(int array[], int size)
{
    int n = size - 2, D;
    int S = 0, P = 1;
    int x, y;

    for(int i = 0; i < size; i++)
    {
        S += array[i];
        P *= array[i];
    }

    S = S - (n * (n + 1)) / 2;
    P = P / fact(n);

    D = sqrt((S * S) - 4 * P);

    x = (S + D) / 2;
    y = (S - D) / 2;

    cout<<x<<" "<<y;
}

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

        findRepeating(array, n + 2);
        cout<<endl;
    }

    return 0;
}