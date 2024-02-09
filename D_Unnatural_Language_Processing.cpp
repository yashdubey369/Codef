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
    string s;
    cin>>s;
    string v="";
    for(int i=0;i<n;i++){
        if(s[i]=='d' ||s[i]=='b'||s[i]=='c') v.push_back('C');
        else v.push_back('V');
    }
    string ans="";
        string a="",b="";
    for(int i=n-1;i>=0;i--){
        if(a=="VC" || a=="CVC"){
            ans+=b;
            ans.push_back('.');
            a="";
            b="";
            // i++;
        }
         
            a.push_back(v[i]);
            b.push_back(s[i]);
        
    }
            ans+=b;

    // for(auto i:v) cout<<i;
    // cout<<endl;
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}
    
}