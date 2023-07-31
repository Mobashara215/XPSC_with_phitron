#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int t;  cin>>t;
    while(t--){
        int m; 
        cin>>m;
        string s; 
        cin>>s;
        bool function=false;
      map<string,ll>mp;
        string s1;
        for(int i=0;i<m-1;i++){
            s1=s[i];
            s1+=s[i+1];
 
            if(mp.find(s1) == mp.end()){
                mp[s1]=i;
            }
            else{
                if(mp[s1]!=i-1){
                    function=1;
                    break;
                }
            }
        }
        
        if(function){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
 
    return 0;
}