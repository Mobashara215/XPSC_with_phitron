#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        
        int p;
        cin>>p;
        string s=to_string(p);
        if(s[s.size()-1]-'0'<5){
            cout<<100-(p-p%10)<<endl;
        }else{
            cout<<100-(p-p%10+10)<<endl;
        }
    }
    
    return 0;
}