#include<bits/stdc++.h>
using namespace std;

#define int long long int
void dfs(vector<int> adj[],vector<int> &vis,int n,int m,int src){
    vis[src]=1;
    for(auto it:adj[src]){
        if(!vis[it]) dfs(adj,vis,n,m,it);
    }
}
signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n,m,cnt=0;
cin>>n>>m;
vector<int> adj[n+1];
vector<int> vis(n+1,0);
vector<pair<int,int>> ans;
for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
    // int flag=1;
    dfs(adj,vis,n,m,1);
for(int i=2;i<=n;i++){
    if(!vis[i]) {
            cnt++;
            ans.push_back({i-1,i});
            dfs(adj,vis,n,m,i);
    }
}
cout<<cnt<<endl;
for(auto i:ans){
    cout<<i.first<<" "<<i.second<<" "<<endl;
}

    
}