// M - Extra: Is B a subsequence of A ?
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    long long size1 , size2 ;           // size1 is  size of array and size2 is size for subSequence ;
    cin >> size1 >> size2 ;

   long long arr1[size1] ;
   long long arr2[size2] ;

    for ( int i =0 ; i< size1 ; i++)
    {
        cin >>arr1[i] ; 
    }

    for ( int i =0 ; i< size2 ; i++)
    {
        cin >> arr2[i] ;
    }

    long long counter = 0 ,  j = 0 ;

	for(int i =0 ; i< size1 ; i++)           
    {
            if(arr1[i] == arr2[j])
            {
                counter++;
                j++;
            }
        
    }

    if( counter == size2 )
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
