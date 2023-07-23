#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int x,y;
    cin>>x>>y;
    if(y<x)
    {
     cout<<y*1<<endl;
    }

    else{
     int c=abs(x-y);
     int p=(x*1)+(c*2);
        cout<<p<<endl;
    }
}
}
