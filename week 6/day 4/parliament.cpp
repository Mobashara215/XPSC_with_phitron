s#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 

int main()
{
    int t; 
    cin>>t;
    while(t--){
        int n,k;    cin>>n>>k;
        int rem=n-k;
        if(rem<=k){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}