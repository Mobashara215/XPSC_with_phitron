#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 

int main()
{
    int t; 
    cin>>t;
    while(t--){
      
    string s;  
    cin>>s;
    int day=0,month=0;
    day = (s[0]-'0') * 10 + s[1]-'0';
    month = (s[3]-'0') * 10 + s[4]-'0';
    if(day > 12){
        cout<<"DD/MM/YYYY\n";
    }
    else if(month>12){
        cout<<"MM/DD/YYYY\n";
    }
    else{
        cout<<"BOTH"<<endl;
    }
    }

return 0;
}