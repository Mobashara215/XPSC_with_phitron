#include <bits/stdc++.h>
using namespace std;
int main()
{
 
    int t; 
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        string final=s;
        reverse(s.begin(),s.end());
        cout<<s+final<<endl;
    }

    return 0;
}