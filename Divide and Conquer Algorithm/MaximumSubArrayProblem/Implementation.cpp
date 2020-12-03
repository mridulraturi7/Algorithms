/*
    Maximum SubArray Problem.
*/

#include<iostream>
#include<limits.h>

using namespace std;

int max(int x, int y)
{
    return x > y ? x : y;
}

int findCrossSubArraySum(int array[], int l, int mid, int h)
{
    int sum = 0;
    int left_sum = INT_MIN;
    for(int i = mid; i >= l; i--)
    {
        sum += array[i];
        if(sum > left_sum)
        {
            left_sum = sum;
        }
    }

    sum = 0;
    int right_sum = INT_MIN;
    for(int i = mid + 1; i <= h; i++)
    {
        sum += array[i];
        if(sum > right_sum)
        {
            right_sum = sum;
        }
    }

    return left_sum + right_sum;
}

int findMaxSubArraySum(int array[], int l, int h)
{
    if(l == h)
    {
        return array[l];
    }

    int mid = (l + h) / 2;

    int left_sum = findMaxSubArraySum(array, l, mid);

    int right_sum = findMaxSubArraySum(array, mid + 1, h);

    int cross_sum = findCrossSubArraySum(array, l, mid, h);
    
    return max(max(left_sum, right_sum), cross_sum);
}

int main()
{
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;

    cout<<"Enter Array Elements: ";

    int *array = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    cout<<"Maximum SubArray Sum is: "<<findMaxSubArraySum(array, 0, n - 1);

    return 0;
}