#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        
        if(a+b<=n-2){
            cout<<"Yes\n";
            continue;
        }
    
        else if(a==n && b==n){
            cout<<"Yes\n";
            continue;
        }
        else{
            cout<<"No\n";
            continue;
        }
    }

    return 0;
}