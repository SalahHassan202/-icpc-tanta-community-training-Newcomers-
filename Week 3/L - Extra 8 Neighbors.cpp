// L - Extra: 8 Neighbors
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{

   int row ,  column ;              cin >> row >> column ;
   char arr[105][105];

   for( int i =1 ; i<= row ; i++)
   {
        for( int j =1 ; j<= column ; j++)
        {
            cin>>arr[i][j] ;
        }
   }

    int index1 , index2 ;
	cin >> index1 >> index2 ;

	if(arr[index1][index2-1]!= '.' 
	 && arr[index1][index2+1]!= '.'
	 && arr[index1-1][index2]!= '.' 
	 && arr[index1+1][index2]!= '.' 
	 && arr[index1-1][index2+1]!= '.' 
	 && arr[index1-1][index2-1]!= '.'
	 && arr[index1+1][index2-1]!= '.' 
	 && arr[index1+1][index2+1]!= '.')
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }

    return 0;
}
