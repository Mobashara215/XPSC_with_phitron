#include<bits/stdc++.h>
using namespace std;
 
long long solve()
{
    long long n,m;
        cin>>n>>m;
        long long max_move=0;
        vector<vector<long long>> a(n,vector<long long>(m,0));
 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                long long count_s=0;
                
                count_s+=a[i][j];
                long long idx1=i-1,idx2=j-1;
                while(idx1>=0 && idx2>=0){
                    count_s+=a[idx1][idx2];
                    idx1--;
                    idx2--;
                }
                idx1=i-1;
                idx2=j+1;
                while(idx1>=0 && idx2<m){
                    count_s+=a[idx1][idx2];
                    idx1--;
                    idx2++;
                }
                idx1=i+1;
                idx2=j-1;
                while(idx1<n && idx2>=0){
                    count_s+=a[idx1][idx2];
                    idx1++;
                    idx2--;
                }
                idx1=i+1;
                idx2=j+1;
                while(idx1<n && idx2<m){
                    count_s+=a[idx1][idx2];
                    idx1++;
                    idx2++;
                }
                max_move=max(max_move,count_s);
              
            }
        }
        cout<<max_move<<endl;
        return 0;
}
 
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
return 0;
}