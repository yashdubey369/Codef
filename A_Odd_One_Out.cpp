#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,m,k;
    cin>>n>>m>>k;
    if(n==m) cout<<k<<endl;
    else if(k==m) cout<<n<<endl;
    else cout<<m<<endl;
}
    
}