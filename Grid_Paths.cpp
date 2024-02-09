#include <bits/stdc++.h>
using namespace std;

#define int long long int
int mod = 1e9 + 7;
// Memoisation
// int solve(vector<vector<char>> v,int n,int m,vector<vector<int>> &dp){
//     if(n==0 && m==0 && v[n][m]=='.') return 1;
//     if(n<0||m<0) return 0;
//     if(dp[n][m]!=-1) return dp[n][m];
//     if(v[n][m]=='.'){
//         return dp[n][m]=(solve(v,n-1,m,dp) + solve(v,n,m-1,dp));
//     }
//     return 0;
// }

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Input
    int n;
    cin >> n;
    vector<vector<char>> v(n, vector<char>(n));
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    // Memoisation
    //  int ans=solve(v,n-1,n-1,dp);
    //  cout<<ans<<endl;

    // Tabulation
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int right = 0, up = 0;
            if (i == 0 && j == 0 && v[i][j] == '.')
            {
                dp[i][j] = 1;
                continue;
            }
            if (v[i][j] == '.')
            {
                if (j > 0)
                    right = dp[i][j - 1];
                if (i > 0)
                    up = dp[i - 1][j];
            }
            dp[i][j] = (right + up) % mod;
        }
    }
    cout << dp[n - 1][n - 1] % mod << endl;
}