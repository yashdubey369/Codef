#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
 int a,b,c;
 cin>>a>>b>>c;
 int d=min(a,min(b,c));
 int flag=0,n,m,l;
 if(a%d==0&&b%d==0&&c%d==0){
    l=(a/d)-1;
    m=(b/d)-1;
    n=(c/d)-1;
 }  
 else flag=1; 
 if(flag==0 && l+m+n<=3) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
}
    
}