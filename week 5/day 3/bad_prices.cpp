#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    int m; 
    cin>>m;
    vector<int>a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int cn=0;
    int Min=a[m-1];
    for(int i=m-2;i>=0;i--){
        if(a[i]>Min){
            cn++;
        }
        Min=min(a[i],Min);
    }
    cout<<cn<<endl;
    
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