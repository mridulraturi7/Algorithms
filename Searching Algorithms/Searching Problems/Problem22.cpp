/*
    Searching in an array where adjacent differ by at most k.
    This problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/searching-in-an-array-where-adjacent-differ-by-at-most-k/0/?category[]=Searching&difficulty[]=0&page=1&query=category[]Searchingdifficulty[]0page1
    Difficulty - Easy
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