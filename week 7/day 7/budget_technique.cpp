#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; 
    cin>>t;
    while(t--){
        int x; cin>>x;
        ll mul=(x*1000);
        ll rem=mul/2;
        rem/=5;
        cout<<rem<<endl;
        
    }

    return 0;
}
