#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,a,q,cnt=0,flag=0,b=1;
    string s;
    cin>>n>>a>>q;
    cin>>s;
    for(auto i:s){
        if(a>=n) flag=1;
        if(i=='+') a++;
        else a--;
        // if(a>n) b=1;
    }
    if(flag && a>=n) cout<<"YES"<<endl;
    if(flag && a<n)  cout<<"MAYBE"<<endl;
    else cout<<"NO"<<endl;

}
    
}