#include<bits/stdc++.h>
using namespace std;


int main()
{
    

    int t;
      cin>>t;
    while (t--)
    {
        
        int n;
          cin>>n;
        string s[n];
        for(int i=0;i<n-2;i++){
            cin>>s[i];
        }
        string ans="";
        bool f=false;
        ans+=s[0];

        for(int i=1;i<n-2;i++){
            if(s[i][0]==ans.back()){
                ans+=s[i][1];
            }
            else{
                f=true;
                ans+=s[i];
            }
        }
        if(f==false){
            ans+='b';
        }
        cout<<ans<<endl;
    }
    
    return 0;
}