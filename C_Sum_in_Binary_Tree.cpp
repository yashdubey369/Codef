#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int ans=n;
    while(n>0){
         if(n%2==0) {
            n/=2;
            ans+=n;
         }
         else{
            n--;
            n/=2;
            ans+=n;
         }
    }
    cout<<ans<<endl;
}
    
}