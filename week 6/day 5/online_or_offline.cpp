#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        double n,m;    cin>>n>>m;
        double c=(0.1)*n;
        n=n-c;
        if(n<m){
            cout<<"ONLINE"<<endl;
        }else if(n==m){
            cout<<"EITHER"<<endl;
        }else{
            cout<<"DINING"<<endl;
        }
    }
}