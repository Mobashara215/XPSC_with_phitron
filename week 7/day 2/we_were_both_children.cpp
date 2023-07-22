#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        vector<int>a(p+1,0);
        map<int,int>mp;
        for(int i=0;i<p;i++){
            int s;
            cin>>s;
            if(s<=p){
                mp[s]++;
            }
        }
        for(int i=1;i<=p;i++){
            if(mp[i] == 0){
                continue;
            }
            for(int j=i;j<=p;j+=i){
                a[j]+=mp[i];
            }
        }
        
        cout<<*max_element(a.begin(),a.end())<<endl;
         mp.clear();
    }

    return 0;
}