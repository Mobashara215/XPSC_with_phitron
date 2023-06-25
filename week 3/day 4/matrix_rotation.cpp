#include<bits/stdc++.h>
using namespace std;

int main()
{
   
    int t;  
    cin>>t;
    while(t--)
    {
        int p,q,r,s;
            cin>>p>>q>>r>>s;
        if ((q > p && s > r && r > p && s > q) ||
                (p > r && q > s && s > r && q > p) ||
                    (r > s && p > q && q > s && p > r) ||
                        (s > q && r > p && p > q && r > s)){
                           cout<<"YES"<<endl;
                        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}