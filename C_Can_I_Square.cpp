#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
int n,sum=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++) {
    cin>>a[i];
    sum+=a[i];
}
int x=0;
for(int i=1;i*i<=sum;i++){
    if(i*i==sum){
    // cout<<"YES"<<endl;
    x=1;
    break;
    } 
}
if(x) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
    
}