#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int p,m;
	    cin>>p>>m;
	    if(p<m)
	    {
	        cout<<0<<"\n";
	    }
	    else
	    {
	        int sum=p-m;
	        cout<<sum<<"\n";
	    }
	}
	return 0;
}