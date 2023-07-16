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
        int m; 
        cin>>m;
        if(m<=15){
            if(m<=10){
                cout<<"Lower Double"<<endl;
            }else{
                cout<<"Lower Single"<<endl;
            }
        }
        else{
            if(m<=25){
                cout<<"Upper Double"<<endl;
            }else{
                cout<<"Upper Single"<<endl;
            }
        }
    }

    return 0;
}