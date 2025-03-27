// E - Extra: Digits 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
	long long cases ;     cin >> cases ;
	string num;        
	while(cases--)
	{
		cin>>num ;
		for(int i =num.size()-1 ; i >=0 ; i--)
		{
			cout<<num[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}