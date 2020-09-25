/*
    Ishaan's Intership.
*/

#include <iostream>

using namespace std;

int main() 
{
	int testCase;
	cin>>testCase;
	
	while(testCase-- != 0)
	{
	    int n, k;
	    cin>>n>>k;
	    
	    int power = 1;
	    while(power <= n)
	    {
	        power *= k;
	    }
	    
	    cout<<power/k<<endl;
	}
	
	return 0;
}