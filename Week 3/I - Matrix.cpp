// I - Matrix 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int size ;           cin >> size ;
    int arr[size][size];
    for(int i =0 ; i< size ; i++)
    {
        for(int j = 0 ; j < size ; j++)
        {
            cin >>arr[i][j] ;
        }
    }
   
   long long sum1 = 0 , sum2 = 0 ;
   for(int i =0 ; i < size ; i++)
    {
        for(int j = 0 ; j < size ; j++)
        {
             if(i == j )          // primary diagonal or main diagonal
             {
                sum1+=arr[i][j] ;    // sum1 = sum1 + arr[i][j] ;
             }
             if(size - j -1 == i)   //  secondary diagonal
             {
                 sum2+= arr[i][j] ;   // sum2 = sum2 + arr[i][j] ;
             }
   
        }
    }

   cout<< abs(sum1 - sum2 )<<endl;
   


    return 0;
}
