#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--){
        int x,y,n,i;
        cin>>x>>y>>n;
 
        vector<int>a;
        for(i=0;i<n;i++){
            a.push_back(y);
            y-=i+1;
        }
 
        // for(auto it : a){
        //     cout<<it<<" ";
        // }
        
        if(a[a.size()-1]<x){
            cout<<-1<<endl;
            continue;
        }
        else{
            cout<<x<<" ";
            for(i=a.size()-2;i>=0;i--){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
 
return 0;
}