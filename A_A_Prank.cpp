#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t,cnt=1,ans=0;
cin>>t;
int a[t];
for(int i=0;i<t;i++) cin>>a[i];
for (int i = 0; i <t-1; i++)
{
    if(a[i+1]==a[i]+1) {
        cnt++;
        if( i==t-2) cnt+=1;
    }
    else {
        cnt-=2;
        ans=max(ans,cnt);
        cnt=1;
    }

// cout<<cnt<<" ";
}
  cnt-=2;
  ans=max(ans,cnt);
cout<<ans<<endl;


    
}