#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
 string n,ans="";
 cin>>n;
 int flag=0;

 for(int i=0;i<n.size();i++){
    if(n[i]=='1'||n[i]=='7') {
        ans+=n[i];
    }   
 }
 cout<<ans<<endl;
    
}
    
}