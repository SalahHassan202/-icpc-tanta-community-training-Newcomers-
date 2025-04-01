// D - Summation from 1 to N
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;
long long sum (long long n )
{
    if(n <= 1)
    {
        return n ;
    }
    else
    {
        return n * (n+1) /2 ;
    }

}

int main ()
{
    long long num ;           cin >> num ;
    cout<< sum(num) << endl;
 
    return 0 ;
}