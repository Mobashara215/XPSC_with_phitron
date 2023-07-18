#include <bits/stdc++.h>
using namespace std;
typedef long long int ll; 

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ball=m*6;
        int ans=ball*6;
        if(ans>=n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

return 0;
}