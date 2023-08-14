#include<bits/stdc++.h> 
using namespace std; 
typedef long long int ll; 
 int main() 
 { 
     int t;  cin>>t; 
     while(t--){ 
         int a,b,c;  cin>>a>>b>>c; 
         int sum=a*1+b*2+c*3; 
         if(sum%2!=0){ 
             cout<<1<<endl; 
         }else{ 
             cout<<0<<endl; 
         } 
     } 
  
  return 0;
}