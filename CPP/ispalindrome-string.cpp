#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    //PROGRAM TO FIND STRING IS PALINDROME 
    
     string s="tarun";
     
     int low=0;
     int high=s.length()-1;
     
     int flag=1;
     
     
     while(low<high)
     {
         if(s[low]!=s[high])
         {
             flag=0;
             break;
         }
         else{
             low++;
             high--;
         }
     }
    if(flag)
    {
        cout<<"Input string is palindrome\n";
    }
    else{
          cout<<"Input string is not palindrome\n";
    }
    return 0;
}
