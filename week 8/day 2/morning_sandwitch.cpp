#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int m,p,h;
        cin>>m>>p>>h;
        int slice=p+h;
        if((slice-1)>=m-1){
            cout<<m+(m-1)<<endl;
        }
        else{
            cout<<(slice+1)+slice<<endl;
        }
    }
 
    return 0;
}
