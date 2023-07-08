#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    
    bool ans=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            ans&=abs(p[i]-p[j])!=1;
        }
    }
    cout<<2-ans<<endl;
    
}
 
int main()
{
    
 
    int t;  cin>>t;
    while (t--)
    {
        
        solve();
    }
    
    return 0;
}