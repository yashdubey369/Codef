#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
 int n,k,x,ans=0;
 cin>>n>>k>>x;
 if(k-1>x || k>n) cout<<-1<<endl;
 else{
    for(int i=0;i<k;i++){
        ans+=i;
        // cout<<i<<" ";
    }
    if(k==x) x--;
    for(int i=k;i<n;i++){
        ans+=x;
        // cout<<x<<" ";
    }
    cout<<ans<<endl;
 }   

}
    
}