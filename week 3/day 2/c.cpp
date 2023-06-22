#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        set<int>a;

        for(int i=0;i<n;i++){
            int x;cin>>x;
            a.insert(x);
        }
        int len=a.size();
        if((n-len)%2==0){
            cout<<len<<endl;
        }
        else{
            cout<<len-1<<endl;
        }
    }
    return 0;
}