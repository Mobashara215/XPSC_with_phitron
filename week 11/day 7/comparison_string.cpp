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
        int n;  cin>>n;
        string s;   cin>>s;
        int ans=1,crn=1;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                crn=1;
            }
            else{
                crn++;
            }
            ans=max(ans,crn);
        }
        cout<<ans+1<<endl;
    }

    return 0;
}