// A - Print Recursion
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;
void print (int n)
{
    if(n == 0)
    {
        return;
    }
    else
    {
        cout<<"I love Recursion"<<endl;
    }
        print(n-1);
}
int main ()
{

    int num ;            cin >> num ;
    print(num);
    
    return 0 ;
}