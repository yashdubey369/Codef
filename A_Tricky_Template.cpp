#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
 int flag=0,n;
 cin>>n;
 string a,b,c;
 cin>>a>>b>>c;
 for(int i=0;i<n;i++){
    if((a[i]!=b[i] && c[i]!=b[i] && c[i]!=a[i]) || (a[i]==b[i] && c[i]!=a[i])) flag=1;
 }
 if(flag) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;

}
    
}