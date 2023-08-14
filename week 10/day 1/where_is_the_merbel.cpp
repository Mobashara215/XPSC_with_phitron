#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    
    int n,q;
    int cs=1;
    while(cin>>n>>q)
    {
        if(n==0 && q==0)    break;
        cout<<"CASE# "<<cs<<":"<<endl;
        cs++;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a.begin(),a.end());
        while(q--)
        {
            int x;  cin>>x;
            auto it=lower_bound(a.begin(),a.end(),x);
            int idx1=it-a.begin();

            int ans=-1;
            if(idx1 == n)
                ans=-1;
            else if(a[idx1]!=x)
                ans=-1;
            else
                ans=idx1+1;
            
            if(ans==-1)
                cout<<x<<" not found\n";
            else
                cout<<x<<" found at "<<ans<<endl;
        }
    }

    return 0;
}