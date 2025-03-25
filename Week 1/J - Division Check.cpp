// J - Division Check
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<string>
using namespace std;
int  main()
{
	int a , b  ;     
	cin>>a >> b ;

	if((a % b) == 0 )
	{
		cout<<"divisible"<<endl;
	}
	else
	{
		cout<<"not divisible"<<endl;
	}

 	double ans = 0.0 ;         
	ans = (double)a / b ;       // casting ====>   (float)a / b  ====>   ....etc
	cout<<ans <<endl;
	
	return 0;
}
	