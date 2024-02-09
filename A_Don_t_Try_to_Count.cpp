#include<bits/stdc++.h>
using namespace std;

#define int long long int
// int isSubstring(string s1, string s2)
signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    string s,x;
    cin>>x;
    cin>>s;
    int ans=-1;
     
    if(x.find(s)!=string::npos) cout<<0<<endl;
    else{
    while(x.find(s)==string::npos){
        x+=x;
        ans++;
        if(ans>9){
        ans=-1;
        break;
        } 
    }
    if(ans==-1) cout<<-1<<endl;
    else
    cout<<ans+1<<endl;
    }
    
    
}
    
}