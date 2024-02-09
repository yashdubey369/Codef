#include<bits/stdc++.h>
using namespace std;

#define int long long int
int modulo (int a, int b) { return a >= 0 ? a % b : ( b - abs ( a%b ) ) % b; }
signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int x,y,n;
cin>>x>>y;
int ans=y-x;
cin>>n;
n%=6;
if(n==0) n=6;
if(n==1) {
    ans=x;
}
else if (n==2)
{
     ans=y;
}

else{
for(int i=3;i<=n;i++){
    ans=y-x;
    x=y;
    y=ans;
}
// if(ans<0) cout<<(ans%1000000007+1000000007)%1000000007;
}
// cout<<(ans)<<endl;
// cout<<modulo(ans,1000000007)<<endl;
 
cout<<modulo(ans,1000000007)<<endl;

}