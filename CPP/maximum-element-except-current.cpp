
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //PROGRAM TO FIND MAXIMUM ELEMENT EXCEPT CURRENT
    
    vector<int> a={1,2,3,16,3,8,1,15,6,77};
    vector<int> left(a.size(),-1);
    vector<int> right(a.size(),-1);
    
    for(int i=1;i<a.size();i++)
    {
       left[i]=max(left[i-1],a[i-1]);  
    }
    for(int i=a.size()-2;i<a.size();i--)
    {
       right[i]=max(right[i+1],a[i+1]);  
    }
    
    
    for(int i=0;i<a.size();i++)
    {
        cout<<max(left[i],right[i])<<" ";
    }
    
    
    return 0;
}
