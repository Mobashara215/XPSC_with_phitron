#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;cin>>t;
    while(t--)
    {
        long long n,q;
        cin>>n>>q;
        vector<long long>a(n+1,0);
        for(long long i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<long long>pref(n+1,0);
        for(long long i=1;i<=n;i++){
            pref[i]=pref[i-1]+a[i];
        }
 
        while(q--)
        {
            long long l,r,k;
            cin>>l>>r>>k;
            long long T_sum=pref[n];
            T_sum-=(pref[r]-pref[l-1]);
            T_sum+=((r-l+1)*k);
 
            if(T_sum%2==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}