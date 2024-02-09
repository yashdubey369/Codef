#include<bits/stdc++.h>
using namespace std;

#define int long long int
int mnset(vector<int> &a,int n,int k,int total){
    if(n==0){
        return abs(total-2*k);
    }
    return min(mnset(a,n-1,k+a[n-1],total),mnset(a,n-1,k,total));
}
signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n,total=0;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
    total+=a[i];
}
cout<<mnset(a,n,0,total);
}