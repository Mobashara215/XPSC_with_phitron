#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;
    while (t--)
    {
        /* code */
        int x,y;
        cin>>x>>y;
        if(x<=8 && (x*y<=500)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}