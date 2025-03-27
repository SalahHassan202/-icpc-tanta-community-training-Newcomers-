// D - Searching
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
	long long size ;          cin>>size ;
	long long arr[size];       
	for(int i =0 ; i< size ; i++)
	{
		cin>>arr[i] ;
	}

	long long numSearch , flag =0 ,index ;           cin>>numSearch;
	

	for(int i =0 ; i<size ;i++)
	{
		if(numSearch == arr[i])
		{
			flag = 1;
			index = i ;
			break;
		}
	}

	if(flag == 1)
	{
		cout<<index<<endl;
	}
	else
	{
		cout<<-1 <<endl;
	}

	return 0;
}