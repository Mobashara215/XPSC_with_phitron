// Online C++ compiler to run C++ program online
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
        ll n;  cin>>n;
        vector<ll>a(n),b(n);
        for(int i=0; i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        bool f= false;
        sort(b.begin(),b.end());
        for(ll i=0;i<n;i++){
            if(a[i]!=b[i]){
                f=true;
                break;
            }
        }
        if(f){
            cout<<"0"<<endl;
        }
        else{
            ll ans=0;
            ll index=0;
            ll ant = INT_MAX;
            for(ll i=0;i<n-1;i++){
                if(a[i+1]-a[i] < ant){
                    ant = a[i+1]-a[i];
                    index=i;
                }
            }
            ans=(a[index+1]-a[index])/2;
            cout<<ans+1<<endl;
        }
            
    }
 
    return 0;
}