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
    int t; 
    cin>>t;
    while(t--){
        vector<int>a(3);
        int cn=0;
        for(int i=0;i<3;i++){
            cin>>a[i];
            if(a[i]==1){
                cn++;
            }
        }
        if(cn>=2){
            cout<<"Not now"<<endl;
        }else{
            cout<<"Water filling time"<<endl;
        }
    }

return 0;
}