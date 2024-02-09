#include<bits/stdc++.h>
using namespace std;
int mod=998244353;
#define int long long int
int fact(int n){
    int res=1;
    while (n>0)
    {
        res*=n;
        res%=mod;
        n--;
    }
    return res;
    
}
signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    int ans;
    cin>>n;
    if(n%2!=0) {
        cout<<0<<endl;
    }
    else {
        ans=((fact(n/2)%mod)*(fact(n/2)%mod))%mod;
        cout<<ans<<endl;
    }
}
    
}