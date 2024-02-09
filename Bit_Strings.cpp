#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t,ans=1;
cin>>t;
while (t--){
 ans*=2;
 ans%=1000000007;
}
cout<<ans<<endl;
    
}