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
        string q;
        cin>>q;
        set<string>str;
        for(int i=0;i<n-1;i++){
            string p;
            p.push_back(q[i]);
            p.push_back(q[i+1]);
            str.insert(p);
        }
        cout<<str.size()<<endl;
    }
    
    return 0;
}