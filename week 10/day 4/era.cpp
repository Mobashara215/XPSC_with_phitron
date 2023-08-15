#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);   

    int tt; cin>>tt;
    while(tt--)
    {
        int n;  cin>>n;
        int a[n+4];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        
        ll ans=a[1]-1;
        ll index=ans;
        for(int i=2;i<=n;i++)
        {
            if(index+i<a[i])
            {
                ll rem=a[i]-(index+i);
                index+=rem;
                ans+=rem;
            }
        }
       cout<<ans<<endl;
    }

    return 0;
}