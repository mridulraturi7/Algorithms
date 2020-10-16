/*
    Next Greater number with same set of digits.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findNextGreater(vector<int> digits)
{
    int i, j;

    //Find the element starting from right whose left element is smaller than element on its right.
    for(i = digits.size() - 1; i > 0; i--)
    {
        if(digits[i] > digits[i - 1])
        {
            break;
        }
    }

    //Check if the number is in decreasing order, if i == 0
    if(i == 0)
    {
        cout<<"not possible";
        return;
    }

    int x = digits[i - 1], smallest = i;
    
    for(j = i + 1; j < digits.size(); j++)
    {
        if(digits[j] > x && digits[j] < digits[smallest])
        {
            smallest = j;
        }
    }

    //swap both digits
    int temp = digits[i - 1];
    digits[i - 1] = digits[smallest];
    digits[smallest] = temp;

    sort(digits.begin() + i, digits.end());

    for(int k = 0; k < digits.size(); k++)
    {
        cout<<digits[k];
    }
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int num;
        cin>>num;

        vector<int> digits;
        while(num != 0)
        {
            digits.push_back(num % 10);
            num /= 10;
        }

        reverse(digits.begin(), digits.end());

        findNextGreater(digits);

        cout<<endl;
    }

    return 0;
}