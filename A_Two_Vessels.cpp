#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    double a,b,c;
    cin>>a>>b>>c;
    double f=(a+b)/2;
    f-=min(a,b);
    // cout<<f<<endl;
    cout<<ceill(f/c)<<endl;



}
    

}