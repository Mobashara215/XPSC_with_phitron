#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 

int main()
{
    int t; 
    cin>>t;
    while(t--){
        int m; 
        cin>>m;
        int a[m];
        vector<int>prf(m+1,0);
        int cn=0;
        for(int i=0;i<m;i++){
            cin>>a[i];
            prf[a[i]]++;
        }
        sort(prf.begin(),prf.end());
        int max=prf[m];
        cout<<m-max<<endl;
    }

    return 0;
}