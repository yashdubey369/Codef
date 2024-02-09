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
    int a[n];
    map<int,int> m;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        m[a[i]]++;
    }
    if(m.size()==1) cout<<-1<<endl;
    else{
    sort(a,a+n);
    int k=m[a[n-1]];
    cout<<n-k<<" "<<k<<endl;
    for(int i=0;i<n-k;i++) cout<<a[i]<<" ";
    cout<<endl;
    for(int i=n-k;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    }
}
    
}