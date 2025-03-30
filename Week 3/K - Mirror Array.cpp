// K - Mirror Array 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
   long long  row , column ;             cin >> row >> column ;
   long long arr[row][column] ; 

   for( int i =0 ;i < row ; i++)
   {
        for(int j =0 ;j < column ; j++)
        {
            cin >>arr[i][j] ;
        }
   }

    for( int i =0 ;i < row ; i++)
   {
        for(int j =column -1 ;j >=0 ; j--)
        {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
   }

    return 0;
}
