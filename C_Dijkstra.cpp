#include<bits/stdc++.h>
using namespace std;

#define int long long int
void dfs(int node,vector<int> &dist,vector<pair<int,int>> adj[]){
      
      for(auto it:adj[node]){
          if(dist[it.first]>dist[node]+it.second) dist[it.first]=dist[node]+it.second;
          dfs(it.first,dist,adj);
      }
}
signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n,m;
cin>>n>>m;
        vector<pair<int,int>> adj[n+1];
        vector<int> dist(n+1,INT_MAX);
        dist[1]=1;
        for(int i=0;i<m;i++){
            int u,v,w;
            cin>>u>>v>>w;
            adj[u].push_back({v,w});
            // adj[v].push_back({u,w});

        }
        dfs(1,dist,adj);
        for(int i=1;i<n;i++) {
            if(dist[i]==INT_MAX){
                cout<<-1<<endl;
                continue;
            }
        }
        for(int i=1;i<n;i++) {
            cout<<dist[i]<<" ";
        }
        cout<<endl;
    
}