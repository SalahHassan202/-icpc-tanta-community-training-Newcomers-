// Find max and min!
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    int size ;
    cin>>size;

    int arr[size];

    for( int i=0 ; i<size ; i++ )
    {
        cin>>arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for( int i=0 ; i<size ; i++ )
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
        if(min > arr[i])
        {
            min = arr[i];
        }
        
    }
    cout<<max<<" "<<min<<endl;

return 0;
}
