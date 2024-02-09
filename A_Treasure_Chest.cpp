#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
int x,y,k;
cin>>x>>y>>k;
if(x<y){
    x=min(x+k,y);
    cout<<max(x,y)+y-x<<endl;
}
else cout<<max(x,y)<<endl;
}   
}