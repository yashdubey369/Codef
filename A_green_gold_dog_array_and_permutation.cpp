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
    vector<int> a(n);
    vector<pair<int,int>> m;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        m.push_back({x,i});   
    }
    sort(m.begin(),m.end());
    int k=0;
    for(auto i:m){
        a[i.second]=n-k;
        k++;
    }
    for(auto i:a) cout<<i<<" ";
    cout<<endl;
    
}
    
}