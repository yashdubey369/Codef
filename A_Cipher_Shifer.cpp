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
vector<char> ans ;
 int l=0,r=0;
 for (int i = 1; i < n || l<n; i++)
 {
    if(s[i]==s[l]) {
        ans.push_back(s[i]);
        l=i+1;
        i++;
    }
    // cout<<l<<" ";
 } 
    for(auto& i:ans) cout<<i;
    cout<<endl;
}
    
}