#include<bits/stdc++.h>
using namespace std;


int main()
{


    int n,t;
    cin>>n>>t;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if((a[i]&t)==t){
            ans&=a[i];
        }
    }
    if(ans==t){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
