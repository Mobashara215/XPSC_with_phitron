#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        int a,b,c;  cin>>a>>b>>c;
        int sum=a-(b*2)+c;
        if(sum%3==0){
            cout<<0<<endl;
        }else{
            cout<<1<<endl;
        }    
    }
    return 0;
}