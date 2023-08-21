#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x

int reverse_it(long long x){
    long long neW(0);
    while (x){
        neW*=10;
        neW+=x%10;
        x/=10;
    }
    return neW;
}

int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        long long n;    cin>>n;
        long long rev= reverse_it(n);
        int cn=0;
        while (rev!= n){
            n+=rev;
            rev=reverse_it(n);
            cn++;
        }
        cout<<cn<<" "<<n<<endl;

    }

    return 0;
}