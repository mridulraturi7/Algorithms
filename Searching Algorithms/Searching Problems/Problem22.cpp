/*
    Searching in an array where adjacent differ by at most k.
*/

#include<iostream>

using namespace std;

int main() 
{
	int testCase;
	cin>>testCase;
	
	while(testCase-- != 0)
	{
	    int n, k, x;
	    cin>>n>>k;
	    
	    int *array = new int[n];
	    for(int i = 0; i < n; i++)
	    {
	        cin>>array[i];
	    }

	    cin>>x;
	    
	    int found = -1;
	    
	    for(int i = 0; i < n; i++)
	    {
	        if(array[i] == x)
	        {
	            found = i;
	            break;
	        }
	    }
	    
	    cout<<found<<endl;
	}
	
	return 0;
}