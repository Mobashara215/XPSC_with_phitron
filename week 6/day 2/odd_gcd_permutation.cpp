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
        if(m&1){
            cout<<-1<<endl;
        }
        else{
            for(int i=m;i>0;i--){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
