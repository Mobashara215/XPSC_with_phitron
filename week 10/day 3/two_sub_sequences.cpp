#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;  cin>>t;
    while(t--){
        string s;   cin>>s;
        string tr=s;
        sort(tr.begin(),tr.end());
        char c=tr[0];
        int idx=-1;
        for(int i=0;i<s.size();i++){
            if(s[i] == c){
                idx=i;
                break;
            }
        }
        s.erase(s.begin()+idx);
        cout<<c<<" ";
        cout<<s<<endl;
    }

    return 0;
}