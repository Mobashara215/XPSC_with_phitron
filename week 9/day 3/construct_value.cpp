#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 

int main()
{

    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        a.resize(unique(a.begin(), a.end()) - a.begin());
        n=(int)a.size();
        int count=0;
        for(int i=0;i<n;i++){
          if(i==0 or i==n-1 or(a[i]>a[i-1] and a[i]>a[i+1]) or (a[i]<a[i-1] and a[i]<a[i+1])){
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}