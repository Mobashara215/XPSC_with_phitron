#include <bits/stdc++.h>
using namespace std;
typedef long long int ll; 
int main()
{

    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<n;i+=2){
            cout<<i<<" ";
        }
        for(int i=n;i>=2;i-=2){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}

 