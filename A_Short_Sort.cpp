#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    if(s[0]=='c' && s[2]!='a' ||s[0]!='c' && s[2]=='a') cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
    
}