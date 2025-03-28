// I - Palindrome Array 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
	/*
	An array is called palindrome if it reads the same backward and forward,
	 for example, 
	 arrays { 1 } and { 1,2,3,2,1 } are palindromes,
	  while arrays { 1,12 } and { 4,7,5,4 } are not.
	*/

	int size , flag =0 ;        cin>>size ;
	int arr[size];
	for(int i =0 ; i<size ; i++)
	{
		cin>>arr[i];
	}

	for(int i =0 ; i< size ; i++)
	{
		if(arr[i]!= arr[size-1-i])
		{
			flag =1 ;
			break;
		}
	}
	
	if (flag == 1)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
	}

	return 0;
}