#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>
using namespace std;
typedef long long int ll; 

int main()
{
    

    ll t; 
    cin>>t;
    while(t--){
     int p,k,l;
     cin>>p>>k>>l;
        multiset<int, greater<ll>>a;
        for(int i=0;i<p;i++){
            ll m,y;
            cin>>m>>y;
            if(y==l){
                a.insert(m);
            }
        }
        ll cn=k,final=0;
        for(auto it : a){
            if(cn==0){
                break;
            }
            final+=it;
            cn--;
        }

        if(cn==0){
            cout<<final<<endl;
        }else{
            cout<<-1<<endl;
        }       
    }

    return 0;
}