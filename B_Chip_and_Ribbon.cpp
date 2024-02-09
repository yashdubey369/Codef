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
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=a[0];
    // if(n==1) ans=a[0]-1;
    for(int i=1;i<n;i++) {
        if(a[i]-a[i-1]>0)ans+=a[i]-a[i-1];
       
    }
    cout<<ans-1<<endl;
}
    
}