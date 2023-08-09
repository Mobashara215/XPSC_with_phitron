#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while(t--){
        int a,b;    cin>>a>>b;
        int d=min(min(a,b),(a+b)/4);
        cout<<d<<endl;
    }

    return 0;
}