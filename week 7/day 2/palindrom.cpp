#include<bits/stdc++.h>
using namespace std;
int main()
{        
    int p;
    cin>>p;
 
        string s[]={"b","b","a","a"};
        int j=0;
        for(int i=0;i<p;i++){
            cout<<s[j];
            j++;
            if(j==4){
                j=0;
            }
        }
        cout<<endl;
        return 0;
}
