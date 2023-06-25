#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,s,r;
        cin>>n>>s>>r;

        ll value=s-r;
        cout<<value<<" ";

        for(int i=2;i<=n;i++)
        {
            while(r-value<n-i)
            {
                value--;
            }
            cout<<value<<" ";
            r=r-value;
        }
        cout<<endl;
    }

    return 0;
}
