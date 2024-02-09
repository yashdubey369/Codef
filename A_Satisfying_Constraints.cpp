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
    vector<int> v1,v2;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        if(x==1)v1.push_back(y);
        if(x==2)v2.push_back(y);
        if(x==3)st.insert(y);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int l=v1[v1.size()-1],r=v2[0];
    int cnt=0,ans;
    for(auto i:st){
        if(i<=r && i>=l) cnt++;
    }
    ans=r-l-cnt+1;
    if(ans<0) cout<<0<<endl;
    else cout<<ans<<endl; 

    
}
    
}