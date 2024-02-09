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
 string s;
 cin>>s;
 string a="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 map<char,int> m;
 int k=0, ans=0;
 for(int i=0;i<26;i++) m[a[i]]=i+1;
 for(int i=0;i<n;i++){
    k+=m[s[i]];
    ans++;
    if(k>=n) break;
 }   
 cout<<ans<<endl;
}
    
}