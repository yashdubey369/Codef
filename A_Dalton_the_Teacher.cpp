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
   double cnt=0;
   cin>>n;
   int a[n];
   for(int i=1;i<=n;i++) {
    int k;
    cin>>k;
if(k==i) cnt++;
   }
cout<<ceil(cnt/2)<<endl;
}
    
}