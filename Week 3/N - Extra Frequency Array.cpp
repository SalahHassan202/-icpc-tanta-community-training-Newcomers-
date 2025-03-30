// N - Extra: Frequency Array
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{

    // Frequency Array start from index 1 not index zero 

   int size , lines ;        cin >> size >> lines ;
   int arr[1000009] = {0} ;
   int num ;  
   for( int i = 1 ; i <= size ; i++)
    {
         cin >> num ;
         
        if(arr[num] == 0)
        {
            arr[num] = 1 ;
        }
        else
        {
            arr[num]+= 1 ;
        }
    }

    for( int i = 1 ; i<= lines ; i++)
    {
        cout<<arr[i]<<endl;
    }
   

    return 0;
}
