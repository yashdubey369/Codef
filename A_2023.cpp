#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
 int n,k,p=1;
 cin>>n>>k;
 int a[n];
 for(int i=0;i<n;i++){
 cin>>a[i];
 p*=a[i];
 } 
 if((2023%p)==0){
    cout<<"YES"<<endl;
    cout<<2023/p<<" ";
    for(int i=1;i<k;i++) cout<<1<<" ";
    cout<<endl;
 }
 else cout<<"NO"<<endl;

}
    
}