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
        string p;
        cin>>p;
 
        for(int i=0;i<n;i++){
            if(p[i]>='A' && p[i]<='Z'){
                p[i]+=32;
            
            }
        }
         p.erase(unique(p.begin(), p.end()), p.end()); 
        cout << (p == "meow" ? "YES" : "NO") << endl;
        
    }
    
    return 0;
}