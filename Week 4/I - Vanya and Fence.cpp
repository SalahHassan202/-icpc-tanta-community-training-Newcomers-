// I - Vanya and Fence
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    /*
    number of girls are walking along the fence of height h and they do not want the guard to notice them ;
    if (the girl hight > wall hight )
    {
        guard notice them 
    }
    else
    {
        guard don't notice them 
    }
    
    if girl hight <= wall hight     ===>     width===>  +1 
    if girl hight > wall hight      ===>      width===>  +2
    
    
    */

   int number_of_person , hight_of_wall , res = 0 ;
   cin >> number_of_person >> hight_of_wall ;

    int person_hight ;
    while(number_of_person--)
    {
        cin >> person_hight ;
        res++ ;
        if(person_hight > hight_of_wall)
        {
            res++;
        }
        
    
    }

    cout<< res <<endl;

    return 0;
}