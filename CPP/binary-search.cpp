/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    vector<int> v={3,4,7,10,12,15,16,17,88};
    
    int low=0;
    
    int high=v.size()-1;
    
    int mid=0;
    
    int target=11;
    
    int index=-1;
    
    while(low<high)
    {
        mid=(high+low)/2;
        
        if(v[mid]>target)
        {
            low=mid+1;
        }
        else if(v[mid]<target)
        {
            high=mid-1;
        }
        else
        {
              
              index=mid;
              break;
            
        }
        
    }
    if(index==-1)
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<"Element found at "<<index<<endl;
    }
    return 0;
}
