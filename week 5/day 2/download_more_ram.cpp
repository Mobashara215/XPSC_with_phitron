#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;    cin>>n>>k;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++)    cin>>b[i];

    
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++){
        p.push_back({a[i],b[i]});
    }
    sort(p.begin(),p.end());
    
    for(int i=0;i<n;i++){
        if(p[i].first<=k){
            k+=p[i].second;
        }
        else{
            break;
        }
    }
    cout<<k<<endl;
}

int main()
{
   
    int t; 
    cin>>t;
    while (t--)
    {
        
        solve();
    }
    
    return 0;
}   