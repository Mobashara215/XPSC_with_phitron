#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int m; 
    cin>>m;

    int first=0,second=0;
    for(int i=1;i<=m;i++){
        int p; 
        cin>>p;
        if(p==1){
            first++;
        }else{
            second++;
        }
    }
    if((first+2*second)%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        int sum=(first+second*2)/2;
        if(sum%2==0 or (sum%2==1 and first!=0)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }   
}
}



