#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
   
    ll m;  
    cin>>m;
    ll cn=0;
    vector<ll>a(m);
    for(ll i=0;i<m;i++){
        cin>>a[i];
        if(a[i]%2!=0){
            cn++;
        }
    }
    cn=min(cn,m-cn);
    cout<<cn<<endl;
    return 0;
}