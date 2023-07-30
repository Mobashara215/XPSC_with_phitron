#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    
    int tt;
    cin>>tt;
    while (tt--)
    {
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;

        int mn=0,ks=0,df=0;
        mn=abs(x2-x1)+abs(y2-y1)-1+2;
        ks=abs(x2-x3)+abs(y2-y3)-1+2;
        df=abs(x1-x3)+abs(y1-y3)-1+2;

        if(ks == mn + df-1)
            cout<<1<<endl;
        else{
            ll rem=mn+df-ks;
            ll p=(rem-1)/2;
            cout<<p+1<<endl;
        }
    }
    
    return 0;
}