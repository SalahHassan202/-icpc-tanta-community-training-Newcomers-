// F - Fixed Password
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
	long long password ;

	while(cin >> password )
	{
		if(password == 1999)
		{
			cout<<"Correct"<<endl;
			break;
		}
		else
		{
			cout<<"Wrong"<<endl;
		}
	}
	
	return 0;
}