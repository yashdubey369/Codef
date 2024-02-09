#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 vector<pair<int,int>> v;
 for(int i=0;i<n;i++){
    int k,j;
    cin>>k>>j;
    v.push_back({k,j});

 }   
 int ans=INT_MAX;
 for(auto i:v){
    int a=(i.second-1)/2;
    ans=min(ans,i.first+a);
 }
 cout<<ans<<endl;
}
    
}