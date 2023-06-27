#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {

        int n,k;
        cin>>n>>k;
        string m;
        cin>>m;
        int add[36],count_pair[36];
        for(int i=0;i<26;i++){
            add[i]=0;
            count_pair[i]=0;
        }

        for(int  i=0;i<n;i++){
            if(m[i]>='a' && m[i]<='z'){
               add[m[i]-97]++;
            }
            else{
                count_pair[m[i]-65]++;
            }
        }
        int final=0,
        reminder=0;
        for(int i=0;i<26;i++){
            final=final+min(add[i],count_pair[i]);
            add[i]=abs(add[i]-count_pair[i]);
            reminder=reminder+add[i]/2;
        }
        final=final+min(reminder,k);
        cout<<final<<endl;
    }
    return 0;
}
