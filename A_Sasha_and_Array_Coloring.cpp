#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
 int n,ans=0;
 cin>>n;
 int a[n];
 for(auto& i:a) cin>>i;

 sort(a,a+n);
 for(int i=0;i<n/2;i++){
    ans+=(a[n-1-i]-a[i]);
}  
cout<<ans<<endl; 
}
    
}