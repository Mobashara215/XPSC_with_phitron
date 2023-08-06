#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int max=INT_MIN;
        int min=INT_MAX;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        cout<<a[n-1]-a[0]<<endl;
    }
    return 0;
}