#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
int main()
{
    
    int t;  cin>>t;
    while (t--)
    {
        
        ll p,x;   cin>>p>>x;
        vector<ll>a(p);
        for(ll i=0;i<p;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll ans=0;
        for(ll i=0;i<p;i++){
            if(a[i]!=-1){
                ll target=x*a[i];
                ll low=i+1;
                ll hig=p-1;
                int found=-1;
                while (low<=hig)
                {
                    
                    ll mid=low+(hig-low)/2;
                    if(a[mid]==target){
                        found=mid;
                        hig=mid-1;
                    }
                    if(a[mid]<target){
                        low=mid+1;
                    }
                    else{
                        hig=mid-1;
                    }
                }
                if(found==-1){
                    ans++;
                }else{
                    a[found]=-1;
                }
                
            }
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}