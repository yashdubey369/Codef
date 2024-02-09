#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    if(x==0 && y==0) cout<<0<<endl;
    else if(floor(sqrt((x*x)+(y*y)))*floor(sqrt((x*x)+(y*y)))==(x*x)+(y*y)) cout<<1<<endl;
    else cout<<2<<endl;
    // cout<<floor(sqrt((x*x)+(y*y))) <<endl;
}
    
}