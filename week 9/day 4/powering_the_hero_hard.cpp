#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll final=0;
        priority_queue<ll>pq;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
               if(pq.empty())continue;
                final+=pq.top();
                pq.pop();
            }
            else{
                pq.push(a[i]);
            }
        }
        cout<<final<<endl;

    }

}
