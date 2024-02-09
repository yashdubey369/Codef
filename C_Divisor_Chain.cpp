#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int x;
    cin>>x;
    vector<int> f;
    for(int i=1;i<x;i*=2)
    {
        f.push_back(i);
    }
    int end=f[f.size()-1];
    int y=x-end;
    int q=1;
    if(y&1){
        q=0;
        y--;
    }
    int i=31;
    while(i>=0){
        int setbit=(y&(1<<i));
        if(setbit){
            end+=pow(2,i);
            f.push_back(end);
        }
        i--;
    }
    if(!q) f.push_back(x);
    cout<<f.size()<<endl;
    reverse(f.begin(),f.end());
    for(auto i:f) cout<<i<<" ";
    cout<<endl;
    
}
    
}