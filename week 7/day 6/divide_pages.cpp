#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int od=0,ev=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==1){
                od+=a[i];
            }else{
                ev+=a[i];
            }
        }
        
        if((od&1) && (ev&1)){
            cout<<"YES"<<endl;
        }else if((od%2==0) && (ev%2==0)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}