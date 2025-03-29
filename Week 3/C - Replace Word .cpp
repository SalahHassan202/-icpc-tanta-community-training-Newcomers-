// C - Replace Word 
#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string word ;      cin >> word ;
    for(int i =0 ; i< word.size() ; i++) 
    {
        if((word[i] == 'E' && word[i+1] == 'G' && word[i+2] == 'Y' && word[i+3] == 'P' && word[i+4] == 'T') )
        {
            i+=4;     // i = i+4 ;
            cout<<" " ;
        }
        else
        {
            cout<<word[i];
        }
    }

    return 0;
}