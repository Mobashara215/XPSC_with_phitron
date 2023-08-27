
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
        int n;  cin>>n;
        string s;   cin>>s;
        int cn=0,total=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                cn++;
            }
            else{
                cn--;
            }
            if(cn<0){
                total++;
                cn=0;
            }
        }
        cout<<total<<endl;
    }

    return 0;
}