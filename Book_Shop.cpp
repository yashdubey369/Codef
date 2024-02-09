#include <bits/stdc++.h>
using namespace std;

// #define int long long int
// // int yash(vector<int> v,vector<int> w,int n,int wt,vector<vector<int>> &dp){
// //     if(wt<=0 ||n<=0) return dp[n][wt]=0;
// //     // if(n<=0 ||wt<0) return INT_MIN;
// //     if(dp[n][wt]!=-1) return dp[n][wt];
// //     if(w[n-1]<=wt) return dp[n][wt]=max(v[n-1]+yash(v,w,n-1,wt-w[n-1],dp),yash(v,w,n-1,wt,dp));
// //     return dp[n][wt]=yash(v,w,n-1,wt,dp);

// // }
// // int mod=1e9+7;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int n, wt;
    cin >> n >> wt;
    vector<int> v(n), w(n);
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(wt + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= wt; j++)
        {
            if (w[i - 1] <= j)
                dp[i][j] = max((v[i - 1] + dp[i - 1][j - w[i - 1]]), dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][wt] << endl;
    // return 0;
    // cout<<yash(v,w,n,wt,dp);
}
