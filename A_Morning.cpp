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
 int a[n];
 for(int i=3;i>=0;i--){
    a[i]=n%10;
    n/=10;
 }   
 int ans=0;
 if(a[0]==0) ans+=10;
 else ans+=a[0];
 for (int i = 1; i <4; i++)
 
 {  if(a[i]==0) ans+=10-a[i-1]+1;
    else ans+=abs(a[i]-a[i-1])+1;
 }
 cout<<ans<<endl;
 
}
    
}