#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    
    string s1="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string s2="A   3  HIL JM O   2TUVWXY51SE Z  8 ";

    map<char,char>mp;
    for(int i=0;i<s1.size();i++){
        mp[s1[i]]=s2[i];
    }

    int n; 
    char s[21];
    bool is_pal,is_mirr;
    while (cin>>s){
        is_pal=1,is_mirr=1;
        n=strlen(s);
        for(int i=0;i<n/2;i++){
            //for palindrome
            if(s[i]!=s[n-1-i]){
                is_pal=0;
            }
            if(s[n-1-i]!=mp[s[i]]){
                is_mirr=0;
            }
        }

        if(is_pal && is_mirr){
            cout<<s<<" -- is a mirrored palindrome.\n\n";
        }
        else if (is_pal && !is_mirr){
            cout<<s<<" -- is a regular palindrome.\n\n";
        }
        else if(!is_pal && is_mirr){
            cout<<s<<" -- is a mirrored string.\n\n";
        }
        else{
            cout<<s<<" -- is not a palindrome.\n\n";
        }
        
    }

    return 0;
}