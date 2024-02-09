#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
// set<int> a;
vector<int> a(n);
for(int i=0;i<n;i++){
    // int x;
    cin>>a[i];
    // a.insert(x);
}
sort(a.begin(),a.end());
int ans=unique(a.begin(),a.end())-a.begin();
cout<<ans<<endl;
__int128_t
    
}