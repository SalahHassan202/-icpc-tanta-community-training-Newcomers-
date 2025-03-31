// I - One Prime
#include <iostream>
# include <string >
#include <algorithm>
using namespace std;


int main ()
{
   
/*
prime number =====>A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.
prime number divisible only by 1 and itself.
Be careful that 1 is not prime .

2
2>1
2/1 =2      2/2=1
.............................
3      
3>1
3/1=3       3/3 =1
.............................
5
5>1
5/1=5       5/5=1
.............................         etc......


*/

int num , flag = 0;               cin >> num ;
// num = 10            ===>   1 2 3 4 5  6 7  8 9 10  ===> any number can divide by < num / 2 ;

for(int i = 2 ; i< num / 2 ; i++)
{
    if(num % i == 0)      // NOT PRIME NUMBER 
    {
        flag = 1;
        cout<< "NO"<<endl;
        break;
    }
}

if(flag == 0)         // PRIME NUMBER 
{
    cout<<"YES"<<endl;
}
    
    return 0 ;
}