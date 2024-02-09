#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int b,c,h;
    cin>>b>>c>>h;
    if(c+h>=b) cout<<b+b-1<<endl;
    else cout<<c+h+c+h+1<<endl;
}
    
}