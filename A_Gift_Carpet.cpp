#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
   int n,m;
   cin>>n>>m;
   vector<vector<char>> v(n+1,vector<char> (m+1));
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
         cin>>v[i][j];

    }
   } 
   string s="vika";
   int ind=0;
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
         if(v[j][i]==s[ind]){
            ind++;
            break;
         }
    }
   }
   if(ind==4) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}
    
}