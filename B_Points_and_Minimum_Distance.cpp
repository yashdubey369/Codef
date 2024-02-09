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
 cin>>n;
 n*=2;
 int a[n];
 for(int i=0;i<n;i++) cin>>a[i];
 sort(a,a+n);
 vector<pair<int,int>> v;
 int d=0,l=a[n/2],m=a[0];
 for(int i=0;i<n/2;i++){
    v.push_back({a[n/2+i],a[i]});
    d+=abs(a[n/2+i]-l)+abs(a[i]-m);
    l=a[n/2+i];
    m=a[i];
 }  
 cout<<d<<endl;
 for(auto i:v){
    cout<< i.first<<" "<<i.second<<endl;
 }

}
    
}