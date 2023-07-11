#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int l,r; cin>>l>>r;
    int max_dif=0,ans=l;
    for(int i=l;i<=r;i++){
        string s=to_string(i);
        sort(s.begin(),s.end());
        int crn=s[s.size()-1]-s[0];
        if(crn>max_dif){
            max_dif=crn;
            ans=i;
        }
        if(max_dif==9){
            break;
        }
    }
    cout<<ans<<endl;
}

}

    