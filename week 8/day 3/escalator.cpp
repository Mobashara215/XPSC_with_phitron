#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin>>t;
    while(t--){
        int n,w,k,H;
        cin>>n>>w>>k>>H;
        vector<int>a(n);
 
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int final=0;
        
        for(int i=0;i<n;i++){
            bool function=false;
            for(int x=1;x<=w;x++){
                for(int y=x+1;y<=w;y++){
                    if(x==y)
                    continue;
                    int lr=abs(a[i]-H);
                    int ps=y-x;
                    ps*=k;
                    if(ps == lr){
                        function=true;
                    }
                }
            }
            final+=(function);
        }
        cout<<final<<endl;
    }
 
    return 0;
}