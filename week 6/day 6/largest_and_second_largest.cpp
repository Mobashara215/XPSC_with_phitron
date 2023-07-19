#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>a;
        for(int i=0;i<n;i++){
            int x;  
            cin>>x;
            a.insert(x);
        }
        ll ans=0;
        auto it = a.end();
        it--;
        ans+=(*it);
        it--;
        ans+=(*it);
        
        cout<<ans<<endl;

    }

 return 0;
}