#include<bits/stdc++.h>
using namespace std;
int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int t;  
    cin>>t;
    while(t--){
        int m;  
        cin>>m;
        vector<int>a(m);
        int zero=0,non_zero=0;
        for(int i=0;i<m;i++){
            cin>>a[i];
            if(a[i] == 0){
                zero++;
            }
        }
        non_zero=m-zero;
        int result=0;
        if(zero == 0){
            result=0;
        }
        else{
            if(non_zero>=zero-1){
                result=0;
            }else{
                int maximum=*max_element(a.begin(),a.end());
                if(maximum == 1){
                    result=2;
                }else{
                    result=1;
                }
            }
        }
        cout<<result<<endl;
    }
 
    return 0;
}
