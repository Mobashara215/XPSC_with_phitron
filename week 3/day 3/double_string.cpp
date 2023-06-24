#include<bits/stdc++.h>
using namespace std;


int main()
{
    

    int test;  
     cin>>test;
    while(test--)
    {
        int n; 
         cin>>n;
        vector<string>s(n);
        map<string,bool>mp;
        for(int i=0;i<n;i++){
            cin>>s[i];
            mp[s[i]]=true;
        }
        string ans="";
        
        for(int i=0;i<n;i++){
            bool f=false;
            for(int j=1;j<=s[i].size();j++){
                string s1=s[i].substr(0,j);
                string s2=s[i].substr(j,s[i].size()-1);

                if(mp[s1] && mp[s2]){
                    f=true;
                    break;
                }
            }
            if(f) ans+="1";
            else ans+="0";
        }
        cout<<ans<<endl;
    }

    return 0;
}