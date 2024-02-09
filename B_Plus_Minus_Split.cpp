#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
 int n,cnt=0;
 cin>>n;
 string s;
 cin>>s;
 for(auto i:s){
    if(i=='+') cnt++;
    else cnt--;
 }   
 cout<<abs(cnt)<<endl;
}
    
}