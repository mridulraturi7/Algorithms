/*
    Two Repeated Elements.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        int *array = new int[n + 3];
        for(int i = 1; i <= n + 2; i++)
        {
            cin>>array[i];
        }

        for(int i = 1; i <= n + 2; i++)
        {
            if(array[abs(array[i])] > 0)
            {
                array[abs(array[i])] *= -1;
            }
            
            else
            {
                cout<<abs(array[i])<<" ";
            }
        }

        cout<<endl;
    }
    
    return 0;
}