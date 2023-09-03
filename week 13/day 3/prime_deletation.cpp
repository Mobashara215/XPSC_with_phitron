#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
bool is_prime(int val){
 
    if(val<=1){
        return false;
    }
    for(int i=2;i<=val/2;i++){
        if(val%i==0){
            return false;
        }
    }
    return true;
}
 
int main()
{
    
    int t;
    cin>>t;
    while(t--){
        string str;   
        cin>>str;
        int ans=0;
        bool track=false;
        for(int i=0;i<8;i++){
            for(int j=i+1;j<9;j++){
                int x=(str[i]-'0')*10 + str[j]-'0';
                if(is_prime(x)){
                    ans=x;
                    track=true;
                    break;
                }
            }
        }
        if(track){
            cout<<ans<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
 
 return 0;
}