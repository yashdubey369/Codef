#include <bits/stdc++.h>
#define int long long int
using namespace std;
void yash(int n,int k){
       
}
// int n,k ;
signed main() {
    int t;
    cin >> t;

    while (t--) {
        int n,k;
        cin>>n>>k;
        
    //    yash(n,k);
     vector<vector<int>>y(n+1,vector<int>(n+1,0));
        // int y[n+1][n+1]={0};
        vector<int>d(n+1,0);
        vector<int>adj(n+1);

        int ind=1;
        while(ind<=n){
            d[ind]=0 ;
            y[ind]={};
            ind++;
        }
        ind=1;
        while(ind<=n){
            cin>>adj[ind];
            y[adj[ind]].push_back(ind-d[adj[ind]]-1);
            d[adj[ind]] = ind ;
            ind++;
        }
        
        
        
        int ans =INT_MAX;
        ind=1;
        while(ind<=k){
            y[ind].push_back(n-d[ind]);
            sort(y[ind].rbegin(),y[ind].rend() );
            int res = y[ind][0]/2 ;
            if(y[ind].size() >=2) res = max(res,y[ind][1]);
            
            ans = min(ans,res);
            ind++;
        }
        cout<<ans<<endl;
    }
   return 0;
}