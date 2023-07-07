#include<bits/stdc++.h>
using namespace std;


int main()
{
   
    int t;  
    cin>>t;
    while (t--)
    {
        
        int p,q,r,x,y;
        cin>>p>>q>>r>>x>>y;
        int s1=(x-p);
        int s2=(y-q);
        s1=max(0,s1);
        s2=max(0,s2);
        if(s1+s2<=r){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}