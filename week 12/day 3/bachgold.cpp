#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
        int n;  cin>>n;
        if(n%2==0){
            cout<<n/2<<endl;
            for(int i=0;i<n/2;i++){
                cout<<"2 ";
            }
            cout<<endl;
        }
        else{
            n-=3;
            cout<<n/2+1<<endl;
            for(int i=0;i<n/2;i++){
                cout<<"2 ";
            }
            cout<<3<<endl;
        }
    return 0;
}