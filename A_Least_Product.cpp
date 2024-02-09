#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
 int n,cntn=0,cntz=0;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<0) cntn++;
    if(a[i]==0) cntz++;

 }   
 if(cntz) cout<<0<<endl;
 else if(cntn&1)cout<<0<<endl;
 else{
    cout<<1<<endl;
    cout<<1<<" "<<0<<endl;
 }

}
    
}