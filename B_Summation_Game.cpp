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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    vector<int> pre(n);
    pre[0]=v[0];
    for(int i=1;i<n;i++) pre[i]=pre[i-1]+v[i];
    int ans=INT_MIN;
    for(int i=0;i<=k;i++){
        int p=0,neg=0;
        if(n-1-i>=0) neg=pre[n-1-i];
        if(n-1-i-x>=0) {
            p=pre[n-1-x-i];
            neg-=pre[(n-1-i-x)];
        }
        // cout<< p<<" "<<neg<<endl;
        ans=max(ans,p-neg);
    }
    cout<<ans<<endl;
    // cout<<endl;

}
    
}