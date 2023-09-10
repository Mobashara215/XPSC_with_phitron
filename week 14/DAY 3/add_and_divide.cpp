#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    int t;
    cin>>t;
    while(t--)
{
    ll a,b;
    cin>>a>>b;

    int cn=0;
    while(a!=0)
    {
        b++;
        cn++;
        a=floor(a/b);
    }
    cout<<cn<<endl;
}

}

