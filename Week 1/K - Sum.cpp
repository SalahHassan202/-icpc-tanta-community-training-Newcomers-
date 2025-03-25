// K - Sum
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<string>
using namespace std;
int  main()
{
	long long a , b , c , t ;            cin>>t ;
	while(t--)
	{
		cin >>a >>b >>c ;
		if((a+b) == c || (a+c) == b || (b+c) == a)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}
	