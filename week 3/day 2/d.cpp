#include<bits/stdc++.h>
using namespace std;


int main()
{
    
    int t; 
    cin>>t;
    while(t--)
    {
    char a[8][8];
    int i=0,j=0,m=0,n=0;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            cin>>a[i][j];
        }
        
    }
    for(i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(a[i][j]=='#')
            {
                if(a[i+1][j-1]=='#' and a[i-1][j+1]=='#' and a[i+1][j-1]=='#' and a[i+1][j+1]=='#')
                {
                    m=i+1;
                    n=j+1;
                    break;
                }
            }
        }
    }
    cout<<m<<" "<<n<<endl;
    }
    return 0;
}