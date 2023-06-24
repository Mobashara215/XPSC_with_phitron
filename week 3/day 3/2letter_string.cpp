#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<char,ll>F_ch;
        map<char,ll>S_ch;
        map<string,ll>mp;
        vector<string>a(n);

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            F_ch[a[i][0]]++;
            S_ch[a[i][1]]++;
            mp[a[i]]++;
        }

        ll ans=0;
        for(int i=0;i<n;i++)
        {
            
            ll x=max((ll)0,F_ch[a[i][0]]-mp[a[i]]);
            ans+=x;
            x=max((ll)0,S_ch[a[i][1]]-mp[a[i]]);
            ans+=x;
            if(F_ch[a[i][0]]>0)F_ch[a[i][0]]--;
            if(S_ch[a[i][1]]>0)S_ch[a[i][1]]--;
            if(mp[a[i]]>0)mp[a[i]]--;
        }
        cout<<ans<<endl;
    }
    
return 0;
}