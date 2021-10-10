#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //PROGRAM TO FIND FREQUENCY OF ELEMENTS IN THE ARRAY
    
    map<int,int> m;
    
    vector<int> v={1,2,3,3,3,3,4,4,4,4,5,6,7,8,9,10,11,12,13,14,15};
    
    for(auto i:v)
    {
        m[i]++;
    }
    
    cout<<"FREQUENCY TABLE "<<endl;
    
    for(auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    return 0;
}
