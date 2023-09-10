#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;    
        cin>>n>>k;
        
        if((n%2==0) && (k%2==1) || (k<n)){
            cout<<"No\n";
        }
        else if(n&1){
            cout<<"Yes\n";
            for(int i=1;i<n;i++){
                cout<<"1 ";
            }
            cout<<(k-n+1)<<"\n";
        }
        else{
            cout<<"Yes\n";
            for(int i=2;i<n;i++){
                cout<<"1 ";
            }
            cout<<(k-n+2)/2<<" "<<(k-n+2)/2<<"\n";
        }
    }
    return 0;
}