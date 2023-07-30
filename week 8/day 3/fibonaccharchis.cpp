#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,p;  
        cin>>n>>p;
        if(p>30){
            cout<<"0"<<endl;
            continue;
        }
        int final=0;
        for(int i=0;i<=n;i++){
            int second=n;
            int first=i;
            bool possible=true;

            for(int j=1;j<=p-2;j++){
                int temp=second-first;
                second=first;
                first=temp;

                if(first<=second && first>-1){
                    continue;
                }else{
                    possible=false;
                    break;
                }
            }
            if(possible){
                final++;
            }
        }
        cout<<final<<endl;
    }

    return 0;
}