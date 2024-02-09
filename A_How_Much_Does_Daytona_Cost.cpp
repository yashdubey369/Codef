#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,k,flag=0
    ;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        if(x==k) flag=1;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
    
}