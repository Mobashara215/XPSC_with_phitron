#include<bits/stdc++.h>
using namespace std;
int main()
{

    int m,n;
    cin>>m>>n;

    int mul=m+n+(m*n);
    if(mul==111){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}
