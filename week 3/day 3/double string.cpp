#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;
     cin>>t;
    while(t--)
    {
        int n;  cin>>n;
        vector<string>s(n);
        map<string,bool>mp;//MAP(1,ABAB, 2,AB)
        for(int i=0;i<n;i++){
            cin>>s[i];
            mp[s[i]]=true;
        }
        string final="";
        //ABAB
        //AB
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
            if(f) final+="1";
            else final+="0";
        }
        cout<<final<<endl;
    }

    return 0;
}
