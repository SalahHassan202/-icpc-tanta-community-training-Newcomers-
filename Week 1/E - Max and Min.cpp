// E - Max and Min
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int  main()
{
	long long a , b , c   ;         cin>>a >> b >> c ;
	cout <<min(min(a , b ), c)<<" "<<max(max(a , b ), c) ;
	
	return 0;
}
	