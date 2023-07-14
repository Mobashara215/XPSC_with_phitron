#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
 
        vector<int>m(s);
 
        for(int i=0;i<s;i++){
            cin>>m[i];
        }
        sort(m.begin(),m.end());
 
        bool flag=1;
        for(int i=1;i<s;i++){
            flag&=(m[i]-m[i-1]<=1);
        }
        if(flag){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    return 0;
}