/*
    Ishaan's Intership.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/ishaans-internship/0/?category[]=Searching&difficulty[]=-1&page=1&query=category[]Searchingdifficulty[]-1page1 
    Difficulty - Basic
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