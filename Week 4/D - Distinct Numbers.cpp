// D - Distinct Numbers
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main()
{
     int size ;         cin >> size ;
     int arr[size] ;
     int counter = 0 ;
     if(size == 0 )
     {
     cout<< 0 <<endl;
     return 0 ;
     } 
     for(int i =0 ; i < size ; i++)
     {
     cin >> arr[i] ;
     }

     sort(arr, arr+size ) ;

     for(int i =0 ; i< size ; i++)
     {
     if(arr[i] != arr[i+1])
     {
          counter++ ;
     }
     }

    cout<< counter << endl; 


    return 0;
}