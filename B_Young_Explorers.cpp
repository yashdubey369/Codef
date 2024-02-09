#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int  n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int cnt=0;
    for(int i=0;i<n;i){
        cnt++;
        i+=a[i];
    }
    cout<<cnt<<endl;
}
    
}