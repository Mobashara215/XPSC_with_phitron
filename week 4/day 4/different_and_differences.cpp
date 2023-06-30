#include<bits/stdc++.h>
using namespace std;


int main()
{
    
    int t;
      cin>>t;
    while(t--)
    {
        long long n,k,diff,i,j;
        cin>>k>>n;
        j=1,diff=1;

        for(i=1;i<=k;i++){
            cout<<j<<" ";
            if(n-(j+diff)>=(k-i-1)){
                j=j+diff;
                diff++;
            }
            else{
                j++;
            }
        }
        cout<<endl;
    }
    return 0;
}