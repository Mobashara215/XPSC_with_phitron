#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c=2;//if even
        int d=4;//if od
       if(n%2==0)
        {
            cout<<c<<endl;
            cout<<1<<" "<<n<<"\n";
            cout<<1<<" "<<n<<"\n";
        }
       else
        {
            cout<<d<<"\n";
                cout<<1<<" "<<n-1<<"\n";
                cout<<1<<" "<<n-1<<"\n";
                cout<<n-1<<" "<<n<<"\n";
                cout<<n-1<<" "<<n<<"\n";
        }
}
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}