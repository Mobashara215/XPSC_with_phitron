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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int final=0;
        for(int i=n-2;i>=0;i--){
            while (a[i]!=0 && a[i]>=a[i+1]){
                
                a[i]/=2;
                final++;
            }
            if(a[i]>=a[i+1] or a[i]==0 &&  i>0){
                final=-1;
                break;
            }
            
        }
        cout<<final<<endl;
        
    }
    
    return 0;
}