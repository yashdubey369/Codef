#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n,ans=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
for(int i=1;i<n;i++){
    if(a[i]<a[i-1]){
        ans+=a[i-1]-a[i];
        a[i]=a[i-1];
    }
}
cout<<ans<<endl;

    
}