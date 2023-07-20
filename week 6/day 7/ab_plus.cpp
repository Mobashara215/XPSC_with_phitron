#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    ll p; 
    cin>>p;
    ll lim=1e6;
    if(p==1){
        cout<<-1<<endl;
    }
    else{
        if(p<=lim){
            cout<<1<<" "<<(p-1)<<" "<<1<<endl;
        }
        else{
            ll a=lim;
            ll b=(p/a);
            ll c=(p%a);
            if(c==0ll){
                cout<<a<<" "<<(b-1)<<" "<<lim<<endl;
            }else{
                cout<<a<<" "<<b<<" "<<c<<endl;
            }
        }
    }
}

    return 0;
}