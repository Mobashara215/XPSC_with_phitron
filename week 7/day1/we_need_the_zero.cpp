#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)   
        cin>>a[i];
        int m=0;
        for(int i=0;i<n;i++){
            m^=a[i];
        }
        for(int i=0;i<n;i++){
            a[i]^=m;
        }
        int final=0;
        for(int i=0;i<n;i++){
            final^=a[i];
        }
        if(final==0){
            cout<<m<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
 
    return 0;
}