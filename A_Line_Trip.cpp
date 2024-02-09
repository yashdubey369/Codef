#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
 int n,x;
 cin>>n>>x;
 int a[n];
 for(int i=0;i<n;i++) cin>>a[i];
 int ans=(x-a[n-1])*2,p=0;
 for(int i=0;i<n;i++){
    ans=max(ans,a[i]-p);
    p=a[i];
 }  
 cout<<ans<<endl;
}
    
}