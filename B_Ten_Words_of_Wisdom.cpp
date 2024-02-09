#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,ans=0,cnt=1;
    cin>>n;
    map<int,int> m;
    while(n--){
        int x,y;
        cin>>x>>y;
        if(x<=10) ans=max(ans,y);
        m[y]=cnt;
        cnt++;

    }
    cout<<m[ans]<<endl;
}
    
}