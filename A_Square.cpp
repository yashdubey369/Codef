#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    vector<pair<int,int>> v;
    for(int i=0;i<4;i++) {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        // cin>>a1>>a2>>b1>>b2>>c1>>c2>>d1>>d2;
        // cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    sort(v.begin(),v.end());
    int l=abs(v[0].second-v[1].second);
    int r=abs(v[1].first-v[3].first);
    // cout<<v[2].first<<" "<<v[3].first<<endl;
    // cout<<l<<" "<<r<<endl;
    cout<<l*r<<endl;
}
    
}