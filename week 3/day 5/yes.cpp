#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int test;
    cin >> test;
    string str;
    for (int i = 0; i < 50; i++){
        str+= "Yes";
    }
    while (test--){
        string s;
        cin >> s;
        if (str.find(s, 0) != -1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}