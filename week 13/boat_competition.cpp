#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x

void solve()
{
	int n;	cin>>n;
	map<int,int>mp;
	for(int i=0;i<n;i++){
		int x;	cin>>x;
		mp[x]++;
	}
	int maxi=0;
	for(int i=2;i<=(2*n);i++){
		int total=0;
		for(auto j : mp){
			int other=i-j.first;
			if(other>=1 && mp.count(other)){
				total+=min(j.second,mp[other]);
			}
		}
		total/=2;
		maxi=max(maxi,total);
	}
	cout<<maxi<<endl;
}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        solve();
    }

    return 0;
}