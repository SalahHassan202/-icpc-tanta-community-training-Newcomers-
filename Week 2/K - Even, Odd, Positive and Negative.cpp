// K - Even, Odd, Positive and Negative
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
	int size  , even = 0 , odd = 0 , positive = 0 , negative = 0 ;         cin>> size ;
	int arr[size] ;
	for(int i =0 ; i< size ; i++)
	{
		cin>>arr[i] ;
	}

	for(int i =0 ; i< size ; i++)
	{
		if(arr[i] % 2 == 0 )
		{
			even++;
		}
		else
		{
			odd++;
		}
	}

	for(int i =0 ; i< size ; i++)
	{
		if(arr[i] > 0 )
		{
			positive++;
		}
		else if (arr[i] < 0)
		{
			negative++;
		}
	}

	cout << "Even: " << even <<endl;
	cout << "Odd: " << odd <<endl;
	cout << "Positive: " << positive <<endl;
	cout << "Negative: " << negative << endl;

	return 0;
}