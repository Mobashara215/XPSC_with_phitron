#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 

int main()
{
    int test; 
    cin>>test;
    while(test--){
        int p;
        cin>>p;
        string m;
        cin>>m;
        int zero=0,one=0;
        for(int i=0;i<p;i++){
            if(m[i]=='0'){
                zero++;
            }else{
                one++;
            }
        }
        int final=min(zero,one);
        if(final%2==0){
            cout<<"Ramos\n";
        }else{
            cout<<"Zlatan\n";
        }
    }

    return 0;
}