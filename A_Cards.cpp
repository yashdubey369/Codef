#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
string s;
cin>>s;
int cntz=0,cntn=0;
for(auto& i:s) {
    if(i=='z') cntz++;
    else if(i=='n') cntn++;
}
while(cntn>0) {
    cout<<1<<" ";
    cntn--;
}
while(cntz>0){
    cout<<0<<" ";
    cntz--;
}
cout<<endl;

    
}