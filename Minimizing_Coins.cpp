#include<bits/stdc++.h>
using namespace std;

#define int long long int
int coins(int n,int k, vector<int> a,vector<vector<int>> &dp){
    if (k == 0 && n >= 0) return 0;
    if (k < 0 || (k > 0 && n <= 0)) return INT_MAX-1;
    if(dp[n][k]!=-1) return dp[n][k];
    int take=INT_MAX-1,nottake=INT_MAX-1;
    if(a[n-1]<=k){
    take=(1+coins(n,k-a[n-1],a,dp));
    }
    nottake=coins(n-1,k,a,dp);
    return dp[n][k]=min(take,nottake);
}
int coinChange(vector<int> &coins, int amount)
        {
            int n = coins.size();
            vector<vector < int>> dp(n + 1, vector<int> (amount + 1,1e6+1));
            for (int i = 0; i <=n; i++) dp[i][0] = 0;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= amount; j++)
                {
                    if (coins[i - 1] > j)
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                    else
                    {
                        dp[i][j] = min(1 + dp[i][j - coins[i - 1]], dp[i - 1][j]);
                    }
                }
            }
            if (dp[n][amount] == INT_MAX - 1) return -1;
            else return dp[n][amount];
        }
signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n,k;
cin>>n>>k;
vector<int> a(n);
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
// vector<vector<int>> dp(n+1,vector<int> (k+1,-1));
// int ans=coins(n,k,a,dp);
// if(ans==INT_MAX-1) return -1;
// else cout<<ans;
cout<<coinChange(a,k);

    
}