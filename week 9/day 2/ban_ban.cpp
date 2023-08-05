#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 
 
int main()
{
    int t; 
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        int m=p/2+p%2;
        cout<<m<<endl;
        int l=1,r=3*p;
        while (l<r)
        {
            cout<<l<<" "<<r<<endl;
            l+=3;
            r-=3;
        }
        
    }
 
    return 0;
}