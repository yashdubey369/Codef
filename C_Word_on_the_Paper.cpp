#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    string s="";
 for (int i = 0; i < 64; i++)
 { char x;
    cin>>x;
    if(x=='.') continue;
    else s+=x;
 }
   cout<<s<<endl;
}
    
}