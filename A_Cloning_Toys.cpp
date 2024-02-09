#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t,n;
cin>>t>>n;
if(n==0) {
    cout<<"No"<<endl;
}
else if(n==1){
    if(t==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
else{
int y=t-(n-1);

if(y>=0 &&y%2==0) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}   
}