// L - Medium Number
#include <iostream>
# include <string >
#include <algorithm>
using namespace std;
int main ()
{
    int testCases ;     cin >> testCases ;
    int arr[3] ; 
    while(testCases--)
    {

        for(int i =0 ; i< 3; i++)
        {
                cin >> arr[i] ;
        }

        sort(arr , arr+3) ;

        cout<<arr[1]<<endl; ;

    }

    return 0;
}
