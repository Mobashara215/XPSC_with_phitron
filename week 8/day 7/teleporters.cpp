#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,c;  cin>>n>>c;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            a[i]=i+x;
        }
        int ans=0,tot=0;
        sort(a.begin(),a.end());
        for(int i=1;i<=n;i++){
            if(tot+a[i]>c){
                break;
            }
            else{
                tot+=a[i];
                ans++;
            }
        }
        cout<<ans<<endl;
    }
 
    return 0;
}