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
int cnt=0;
cin>>s;
string s1="codeforces";
for(int i=0;i<10;i++) {
    if(s[i]!=s1[i]) cnt++;
}    
cout<<cnt<<endl;
}

}