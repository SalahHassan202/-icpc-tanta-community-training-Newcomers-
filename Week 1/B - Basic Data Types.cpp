// B - Basic Data Types
#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<string>
using namespace std;
int  main()
{
	int a  ; long long b; char c ;float d ; double e ;
	cin>> a >> b >> c >> d >> e ;
	cout<<a << endl << b <<endl << c << endl ;
	cout<<fixed<<setprecision(3)<<d <<endl;    // we use library =====>   #include<iomanip>
	cout<<fixed<<setprecision(5)<<e <<endl;   

	return 0;
}
	