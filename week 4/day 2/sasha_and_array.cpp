#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long sum=0;
    sort(a,a+n);
    for(int i=0;i<n/2;i++)
    {
        sum+=(a[n-i-1]-a[i]);
    }
    cout<<sum<<endl;
    }
    return 0;
}