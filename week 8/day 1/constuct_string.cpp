#include <iostream>
using namespace std;
typedef long long int ll; 

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s; 
        cin>>s;
        string final="";
        int temp=1;
        char ch = s[0];
        for(int i=1;i<n;i++){
            if(ch == s[i]){
                temp++;
            }
            else{
                if(temp%2==0){
                    final+=ch;
                    final+=ch;
                }else{
                    final+=ch;
                }
                temp=1;
                ch=s[i];
            }
        }
        if(temp%2==0){
            final+=ch;
            final+=ch;
        }else{
        final+=ch;
        }
        cout<<final<<endl;
    }

    return 0;
}