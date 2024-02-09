#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
 int n,k;
 cin>>n>>k;
 int a[n];
 for(int i=n;i>0;i--){
    a[n-i]=i;
 }   
 reverse(a+n-k-1,a+n);
 for(int i=0;i<n;i++) cout<<a[i]<<" ";
 cout<<endl;
}
    
}