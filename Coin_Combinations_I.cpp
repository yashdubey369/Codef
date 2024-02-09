#include<bits/stdc++.h>
using namespace std;

#define int long long int
int coins(int n,int k ,vector<int> &a){
    if(k==0) return 1;
    if(n<=0 || k<0) return 0;
    return coins(n,k-a[n-1],a)+coins(n-1,k,a);
}
signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n,k;
cin>>n>>k;
vector<int> v(n);
for(int i=0;i<n;i++) cin>>v[i];
cout<<coins(n,k,v); 
}