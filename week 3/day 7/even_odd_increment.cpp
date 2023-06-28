#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        long long O=0,E=0,sumO=0,sumE=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                sumE+=a[i];
                E++;
            }
            else
            {
                sumO+=a[i];
                O++;
            }
        }
        while(q--)
        {
            int type,val;
            cin>>type>>val;

            if(type)
            {
                
                if(val%2==0)
                {
                    sumO+=(val*O);
                }

                
                else
                {
                    sumE+=(sumO+val*O);
                    
                    E+=O;
                    O=0;
                    sumO=0;
                }
            }
            else
            {
                if(val%2==0)
                {
        
                    sumE+=(val*E);
                }
                else
                {
                    
                    sumO+=(sumE+val*E);
                    O+=E;
                    E=0;
                    sumE=0;
                }
            }
            cout<<sumE+sumO<<endl;
        }
    }
    return 0;
}