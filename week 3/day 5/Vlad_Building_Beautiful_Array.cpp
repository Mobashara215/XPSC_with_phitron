#include<bits/stdc++.h>
using namespace std;


int main()
{
   
    int t;
    cin>>t;
    while (t--)
    {
        
        int n;
        cin>>n;
        vector<int>a(n);
        int odd_track=INT_MAX ;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2!=0){
                odd_track=min(odd_track,a[i]);
            }
        }
        bool even=true,odd=true;
        
        for(int i=0;i<n;i++){
            if((a[i]%2==0)&& (a[i]<=odd_track)){
                odd=false;
            }
        }
        
        for(int i=0;i<n;i++){
            if((a[i]%2!=0)&& (a[i]<=odd_track)){
                even=false;
            }
        }
        if(odd ||even){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
return 0;
}