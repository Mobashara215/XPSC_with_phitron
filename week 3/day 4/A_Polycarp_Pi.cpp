#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test;
    cin>>test;
    while(test--)
    {
        string pi="314159265358979323846264338327";
        string s;
        cin>>s;
        int crn=0;
        for(int i=0;i<30;i++)
        {
            if(s[i]==pi[i])
            {
                crn++;
            }
            else
            {
                break;
            }
        }
        cout<<crn<<endl;
    }
    return 0;
}
