#include<bits/stdc++.h>
// #include <boost/math/common_factor.hpp> 

using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
 int a,b;
 cin>>a>>b;
 
 if(b%a==0){
    cout<<b*(b/a)<<endl;
 }   
 else{
    // int k=__gcd(a,b);
    // if(k==a || k==b) cout<<b*__gcd(a,b)<<endl;
    //  cout<<a*b<<endl;
      cout << a * b / __gcd(a, b)<<endl;
 }
}
    
}