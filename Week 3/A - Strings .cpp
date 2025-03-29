// A - Strings 
#include <iostream>
#include <string>
using namespace std;


int main()
{
    string a , b ;
    cin >> a >> b ;
    cout<< a.size() <<" "<<b.size() <<endl;
    cout<<a + b <<endl;
    // string is array of char and vice versa .
    // string is arry of char && char is array of string .
    char c;
    c    = a[0];   
    a[0] = b[0] ;
    b[0] = c ;

    cout<< a <<" "<<b <<endl;

    return 0;
}
