#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            sum+=x;
        }
        if(sum%n==0){
            cout<<sum/n<<endl;
        }else{
            cout<<(sum/n)+1<<endl;
        }
    }
    
return 0;
}