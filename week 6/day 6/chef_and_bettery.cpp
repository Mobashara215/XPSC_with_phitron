#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int ans=0;
        while(N!=50)
        {
            if(N>50)
            {
                N-=3;
                ans++;
            }
            if(N<50)
            {
                N+=2;
                ans++;
            }
        }
        cout<<ans<<endl;
    }

return 0;
}