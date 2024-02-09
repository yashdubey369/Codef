#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,f,a,b;
    cin>>n>>f>>a>>b;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=min(v[0]*a,b);
    int i=1;
    while(i<n){
         ans+=min(abs(v[i]-v[i-1])*a,b);
         i++;
    }
    if(f-ans>0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    // cout<<cnt<<endl;
}
    
}