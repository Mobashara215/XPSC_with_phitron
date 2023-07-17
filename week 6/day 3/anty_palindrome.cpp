#include<bits/stdc++.h>
using namespace std;
int main()
{
    int C; 
    cin>>C;
    while(C--){
        int N;
        cin>>N;
        string s;
        cin>>s;
        vector<int>frq(27,0);
        for(int i=0;i<N;i++){
            frq[s[i]-96]++;
        }
        int odd=0,even=0;
        for(int i=1;i<27;i++){
            if(frq[i]%2!=0){
                odd++;
            }
            else if(frq[i]%2==0 && frq[i]>0){
                even++;
            }
        }
        if(odd>1 or (N%2==0 and odd==1)){
            cout<<0<<endl;
        }else if(N%2!=0 and odd==1 and even==0){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
        }
    }
return 0;
}
