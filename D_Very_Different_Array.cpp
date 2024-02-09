#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
  int n,m;
  cin>>n>>m;
  vector<int> a(n),b(m);
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<m;i++) cin>>b[i];
  sort(a.begin(),a.end());
  sort(b.rbegin(),b.rend());
  int ans=0;
  int i=0,y=0,d=m-1,k=n-1;
  while(i<n){
    if(abs(b[d]-a[k])>abs(b[y]-a[y])){
        ans+=abs(b[d]-a[k]);
        d--;
        k--;
    }
    else{
        ans+=abs(b[y]-a[y]);
        y++;
    }
     i++;
  }
  cout<<ans<<endl;
}
    
}