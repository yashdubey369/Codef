#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,cnt=0;
    cin>>n;
    vector<int> v(n);
    for(auto& i:v){
        cin>>i;
    }
    sort(v.begin(),v.end());;
    // v.resize(distance(v.begin(),unique(v.begin(), v.begin() + n)));
    // for(auto i:v) cout<<i<<" ";
    // cout<<endl;
    int b[n+1];
    b[0]=1;
    for (int i = 1; i < v.size(); i++)
    {
        if(i<v.size())b[i]=min(b[i-1]+1,v[i]);
        cnt+=v[i-1]-b[i-1];
    }
    cout<<cnt<<endl;
    // cout<<endl;
    
}
    
}