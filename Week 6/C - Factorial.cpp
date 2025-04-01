// C - Factorial
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;
long long fact(long long n)
{
    if(n == 0 || n == 1)
    {
        return 1 ;
    }
    else
    {
        return n * fact(n-1);
    }
    
}
int main ()
{

    long long t ;      cin >> t ;
    
    while(t--)
    {
        int num ;
        cin >> num ;
       cout<< fact(num)<<endl;
    }
    
    return 0 ;
}