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
        int n;
        cin>>n;
        string p;
        cin>>p;
        int a[2];
        for(int i=0;i<2;i++){
            a[i]=0;
        }
        char series='A';
        for(auto i : p){
            if(i==series){
                a[i-'A']++;
            }
            else {
                series=i;
            }
        }
        cout<<a[0]<<" "<<a[1]<<endl;
    }

    return 0;
}