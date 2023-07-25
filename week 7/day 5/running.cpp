include <bits/stdc++.h>
using namespace std;
int main()
{
   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int final=0;
        for(int i=0;i<n;i++){ 
        if(a[i]<=2*b[i] and b[i]<=2*a[i]){ 
            final++; 
        } 
        } 
        cout<<final<<endl;
    }

    return 0;
}