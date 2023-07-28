#include <bits/stdc++.h>
using namespace std;
typedef long long int ll; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while(t--){
      int p;
      cin>>p;
      vector<int>a(p);
      int mini=INT_MAX;
      for(int i=0;i<p;i++){
        cin>>a[i];
        mini=min(mini,a[i]);
      }

        int count=0;
      for(int i=0;i<p;i++){
        if(a[i] == mini){
            count++;
        }
      }

      cout<<p-count<<endl;
    }

    return 0;
}