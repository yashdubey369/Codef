#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
string s;
cin>>s;
int cnt=1,ans=1;
for (int i = 1; i < s.size(); i++)
{
    if(s[i-1]==s[i])cnt++;
    else cnt=1;
    ans=max(ans,cnt);
}
cout<<ans<<endl;

    
}