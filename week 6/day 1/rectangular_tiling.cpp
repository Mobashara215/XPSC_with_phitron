#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
      cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        if((m&1)&(n&1)){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
