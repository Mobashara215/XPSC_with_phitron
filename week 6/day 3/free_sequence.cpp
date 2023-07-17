#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 

bool is_ap_here(vector<int>seq, int n){
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(seq[j]-seq[i] == seq[k]-seq[j]){
                    return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        if(is_ap_here(a,n)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    
}
    
    
    
