// B - Max 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	long long size ;           cin >>size;
	long long arr[size]; 

	for( int i =0 ; i< size ; i++)
	{
		cin>>arr[i] ;
	}

	sort ( arr , arr+size);

	cout<<arr[size-1];


	return 0;
}