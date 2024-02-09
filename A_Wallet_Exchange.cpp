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
    if((n+m)%2==0) cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
}
    
}