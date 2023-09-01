#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        if(b.size()<a.size()){
            cout<<"NO\n";
            continue;
        }
        stack<char>st;
        for(int i=a.size()-1;i>=0;i--){
            st.push(a[i]);
        }

        for(int i=0;i<b.size();i++){
            if(!st.empty() && b[i]==st.top()){
                st.pop();
            }
        }
        
    }

    return 0;
}