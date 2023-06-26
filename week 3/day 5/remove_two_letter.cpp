#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;  
    cin>>test;
    while(test--)
    {
        int n; 
        cin>>n;
        string s;  
        cin>>s;
        int final=1;
        for(int i=0;i<n-2;i++){
            if(s[i]!=s[i+2]){
                final++;
            }
        }
        cout<<final<<endl;
    }
    return 0;
}