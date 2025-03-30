// A. Banis and Cards
#include <iostream>
# include <string >
#include <algorithm>
using namespace std;
int main ()
{
    /* 
    Want the sum of the numbers which % num2 
    12 2 
    check ?
    if(num1 % num2 == 0 )    // even 
    {
        sum from num1 to num2 
    }
    12 2 
    2 + 4 + 6 + 8 + 10 + 12 = 42 
    ......etc 
    ==========================================
    Test Case 1: (12, 2)
    n = 12, m = 2
    Cards with numbers divisible by 2: 2, 4, 6, 8, 10, 12
    Sum of these cards: 2 + 4 + 6 + 8 + 10 + 12 = 42
    Output: 42
 
    Test Case 2: (1, 1)
    n = 1, m = 1
    The only card is 1, and 1 % 1 = 0
    Sum of this card: 1
    Output: 1
 
    Test Case 3: (1010, 10)
    n = 1010, m = 10
    Cards with numbers divisible by 10: 10, 20, 30, ..., 1010
    To find the sum, we use the arithmetic series sum formula:
    Number of terms (n/10)
    First term (10)
    Last term (1010)
    Sum = (n/2) * (first_term + last_term)
    Sum = (1010/2) * (10 + 1010) / 2
    Sum = 505 * 1020 / 2 = 51510
    Output: 51510
 
    */
 
   int testCases ;         cin >>  testCases ;
   long long num1 , num2 , sum = 0 ;
   while (testCases--)
   {
        cin >>  num1 >> num2 ;
        sum = (num2 * (num1 / num2) * ((num1 / num2) + 1)) / 2;
 
        cout << sum << endl;
   }
 
    return 0 ;
}