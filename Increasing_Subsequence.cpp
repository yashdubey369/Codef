#include<bits/stdc++.h>
using namespace std;

#define int long long int
int LIS(vector<int> &nums,int n,int prev,int ind,vector<vector<int>> &dp){
    if(ind==n) return 0;
    if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
    if(prev==-1||nums[prev]<nums[ind] ){
        return dp[ind][prev+1]=max(1+LIS(nums,n,ind,ind+1,dp),LIS(nums,n,prev,ind+1,dp));
    }
    return dp[ind][prev+1]=LIS(nums,n,prev,ind+1,dp);
}
signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++) cin>>v[i];
vector<vector<int>> dp(n+1,vector<int> (n+1,-1));

cout<<LIS(v,n,-1,0,dp);
    
}