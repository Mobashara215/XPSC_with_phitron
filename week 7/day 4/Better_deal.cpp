#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
       int P=100, Q=200;
       int A,B;
       cin>>A>>B;
       P=P-A;
       Q=Q-(B*2);
       if(P<Q)
       {
           cout<<"FIRST"<<endl;
       }
       else if(P>Q)
       {
           cout<<"SECOND"<<endl;
       }else{
           cout<<"BOTH"<<endl;
       }
}
    return 0;
}