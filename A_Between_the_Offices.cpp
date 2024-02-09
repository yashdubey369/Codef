#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t,cnt=0;
cin>>t;
string s;
cin>>s;
for (int i = 0; i < t-1; i++)
{
    if(s[i]!=s[i+1]&& (s[i]=='S' && s[i+1]=='F')) cnt++;
    else if(s[i]!=s[i+1]&& (s[i]=='F' && s[i+1]=='S')) cnt--;
}
if(cnt>0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

    
}