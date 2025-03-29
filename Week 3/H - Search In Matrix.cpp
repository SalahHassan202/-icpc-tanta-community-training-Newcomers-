// H - Search In Matrix
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{

    int row , column ;          cin >> row >> column ;
    int arr[row][column] ;

    for( int i =0 ; i< row ; i++)
    {
        for(int j =0 ; j < column ; j++)
        {
            cin >> arr[i][j] ;
        }
    }

    int search ;               cin >> search ;
    int flag = 0 ;

    for( int i =0 ; i< row ; i++)
    {
        for( int j =0 ; j< column ; j++)
        {
               if(search == arr[i][j])  // found the element i want it ( search for it )
                {
                    flag = 1 ;
                }
        }
    }

    if(flag == 1)
    {
        cout<<"will not take number"<<endl;
    }
    else
    {
        cout<<"will take number"<<endl;
    }


    return 0;
}
