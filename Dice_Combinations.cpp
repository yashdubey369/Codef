#include<bits/stdc++.h>
using namespace std;

// #define int long long int
int mod=1e9+7;
int yash(int n,vector<long long> &dp){
    // if(n<0) return 0;
    // if(n==0) return dp[0]=1;
    if(dp[n]!=0) return dp[n];
    for(int i=1;i<=6;i++){
        if(n-i>=0){
        dp[n]+=yash(n-i,dp);
        dp[n]%=mod;
        }
    }
    // dp[n]+=(yash(n-1,dp)+yash(n-2,dp)+yash(n-3,dp)+yash(n-4,dp) +yash(n-5,dp) +yash(n-6,dp) )%mod;
    return dp[n];
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
vector<long long> dp(1000001,0);
dp[0]=1;
long long ans=yash(n,dp);
cout<<ans<<endl; 
}
 