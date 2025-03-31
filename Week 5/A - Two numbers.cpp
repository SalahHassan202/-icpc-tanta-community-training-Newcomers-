// A - Two numbers
#include<iostream>
#include<string>
#include <cmath>
#include<algorithm>
#include <ctime>
using namespace std;
int main()
{
    int a , b ;                 cin >> a >> b ;
    // double res = a / b ;        // output not correct 
    double res = static_cast<double>(a) / b;

    cout<<"floor " << a << " / " << b <<" = " <<floor(res) << endl;
    cout<<"ceil " << a << " / " << b <<" = " <<ceil(res) << endl;
    cout<<"round " << a << " / " << b <<" = " <<round(res ) << endl;

    
    return 0;
}


/*

// A - Two numbers
#include<iostream>
#include<string>
#include<algorithm>
#include <cmath>
using namespace std;
int main()
{
    int a , b ;             cin >> a >> b ;
    int floorNumbers = floor (double(a) / b) ;
    int ceilNumbers = ceil (double(a) / b) ;
    int roundNumbers = round (double(a) / b) ;

    cout<<"floor "<<a <<" / "<< b <<" = "<< floorNumbers <<endl;
    cout<<"ceil "<<a <<" / "<< b <<" = "<< ceilNumbers <<endl;
    cout<<"round "<<a <<" / "<< b <<" = "<< roundNumbers <<endl;

    return 0;
}

*/