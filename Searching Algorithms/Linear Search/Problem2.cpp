/*
    Easy Sum Set Problem.
*/

#include<iostream>

using namespace std;

bool linearSearch(int [], int, int);
void printArray(int [], int n);

int main()
{
    int n, m, setA[100], setB[100], setC[100];
    cin>>n;

    //Input set A
    for(int i = 0; i < n; i++)
    {
        cin>>setA[i];
    }

    cin>>m;

    //Input set B
    for(int i = 0; i < m; i++)
    {
        cin>>setC[i];
    }

    int maxA = setA[0], maxC = setC[0], minA = setA[0], minC = setC[0];

    //find maximum and maximum element in A
    for(int i = 1; i < n; i++)
    {
        if(setA[i] > maxA)
        {
            maxA = setA[i];
        }

        if(setA[i] < minA)
        {
            minA = setA[i];
        }
    }

    //find maximum and minimum element in C
    for(int i = 1; i < m; i++)
    {
        if(setC[i] > maxC)
        {
            maxC = setC[i];
        }

        if(setC[i] < minC)
        {
            minC = setC[i];
        }
    }

    int maxB = maxC - maxA;
    int minB = minC - minA;

    //value of elements in set B can be >= minB and <= maxB
    int k = 0;
    for(int i = minB; i <= maxB; i++)
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            int sum = 0;
            sum = i + setA[j];
            bool res = linearSearch(setC, m, sum);
            if(res == true)
            {
                count++;       
            }
        }
        if(count == n)
        {
            setB[k] = i;
            k++;
        }
    }

    printArray(setB, k);

    return 0;
}

bool linearSearch(int array[], int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if(array[i] == x)
        return true;
    }
    return false;
}

void printArray(int output[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<output[i]<<" ";
    }
}