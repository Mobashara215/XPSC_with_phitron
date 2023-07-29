#include <iostream>
using namespace std;
typedef long long int ll; 

int main()
{
    int t; 
    cin>>t;
    while(t--){
        int m,b,c;
        cin>>m>>b>>c;
        if((m>b) and (b>c)){
            int p=m|b|c;
            cout<<p<<endl;
        }else if ((m<b) and (b<c))
        {
        
            cout<<0<<endl;
        }else{
            cout<<-1<<endl;
        }
        
    }

    return 0;
}