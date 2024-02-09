#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,k,x;
    cin>>n>>k>>x;
    if(2*x>=k*(k+1) && 2*x<=(n*(n+1)-(n-k)*(n-k+1))) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
    
}