#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while(t--){
        int p,y,z; 
        cin>>p>>y>>z;
        int dif=p-z;
        if(dif%y==0){
            cout<<1+(dif/y)<<endl;
        }else{
            cout<<2+(dif/y)<<endl;
        }
    }

    return 0;
}