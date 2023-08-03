#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    for(;t--;)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int final=n;
        int l=0,r=n-1;
        while(l<r && s[l]!=s[r])
        {
                l++;
                r--;
                final=final-2;
        }
        cout<<final<<endl;
    }
 
    return 0;
}
