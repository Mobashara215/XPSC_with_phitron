#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<long long> a(n+m);
        for(int i=0;i<(n+m);i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end()-1);
		reverse(a.begin(),a.end());
        long long final=0;
        for(int i=0;i<n;i++){
            final+=a[i];
        }

        cout<<final<<endl;
        
    }
    return 0;
}