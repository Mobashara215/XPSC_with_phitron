#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
  

    int t;  cin>>t;
    while (t--)
    {
        
        ll p;
        cin>>p;
        if(p==1){
            cout<<0<<endl;
            continue;
        }
        ll val=0;
        ll MIN=INT_MAX;
        for(int i=2;i<50000;i++){
            if(p%i==0){
                val=(p/i)-1+(i-1);
            }else{
                val=p/i+(i-1);
            }
            MIN=min(MIN,val);
        }
        cout<<MIN<<endl;
        
    }
    
    return 0;
}