// #include<bits/stdc++.h>
// using namespace std;

// #define int long long int

// signed main(){
// ios::sync_with_stdio(0);
// cin.tie(0);
// int t;
// cin>>t;
// while(t--){
//  int n;
//  cin>>n;
//  vector<int> adj[n+1];
//  for(int i=0;i<n-1;i++){
//     int u,v;
//     cin>>u>>v;
//     adj[u].push_back(v);
//     adj[v].push_back(u);

//  }   
//  vector<int> s;
//  int ans=0;
//  for(int i=0;i<=n;i++){
//     int k=adj[i].size();
//     if(k==1) ans+=k;
//     // cout<<i<<"->";
//     // for(auto j:adj[i]) cout<<j<<" ";
//     // cout<<endl;
//  }
//  ans++;
// //  for(auto i:s) ans+=i;
//  cout<< (ans/2)<<endl;
// }
    
// }
#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin>>n;
   map<int,int>ma,mb;
   
   for(int i=0;i<n-1;i++){
       int a,b;
       cin>>a>>b;
       ma[a]++;
       mb[b]++;
   }
 
   int cnt=0;
 
   for(auto i:mb){
       if(i.second==1&&ma.find(i.first)==ma.end()){
           cnt++;
       }
   }
   
   cout<<(cnt+1)/2<<endl;
   
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}