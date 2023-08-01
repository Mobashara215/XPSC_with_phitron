#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int t;  cin>>t;
    while(t--){
        ll n;   cin>>n;
        ll ans=0,cn=0;
        for(ll l=1; l<=10000; l++){
            if(n%l==0){
                cn++;
            }else{
                cn=0;
            }
            ans=max(ans,cn);
        }
        cout<<ans<<endl;
    }
 
    return 0;
}