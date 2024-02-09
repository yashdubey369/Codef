#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,k,cnt=1,ans=0;
    cin>>n>>k;
    int a[n];
    for(auto &i:a) cin>>i;
    sort(a,a+n);
    for (int i = 1; i <n; i++)
    {
        if(abs(a[i-1]-a[i])<=k) {
            cnt++;
            // cout<<cnt<<" ";
        }
        else {
            ans=max(ans,cnt);
            // cout<<ans<<" ";
            cnt=1;
        }
    }
    ans=max(ans,cnt);

    cout<<n-ans<<endl;
}
    
}