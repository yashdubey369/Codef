#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
int sum=1;
for(int i=0;i<n;i++){
    if(a[i]>sum) break;
    sum+=a[i];
}
cout<<sum<<endl;
}