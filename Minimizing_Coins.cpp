#include <bits/stdc++.h>
using namespace std;

#define int long long int
int coinchange(vector<int> &coins, int n, int target, vector<vector<int>> &dp)
{
    if (n >= 0 && target == 0)
        return 0;
    if ((n < 0) || target < 0)
        return INT_MAX - 1;
    if (dp[n][target] != -1)
        return dp[n][target];
    if (coins[n - 1] <= target)
    {
        return dp[n][target] = min(1 + coinchange(coins, n, target - coins[n - 1], dp), coinchange(coins, n - 1, target, dp));
    }
    return dp[n][target] = coinchange(coins, n - 1, target, dp);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
        cin >> coins[i];
    vector<int> dp(k+ 1,INT_MAX-1);
    dp[0] = 0;
    for (int ind = 1; ind <= n; ind++)
    {
        for (int target = 1; target <= k; target++)
        {
            if (coins[ind - 1] <= target)
            {
                dp[target] = min(1 + dp[target - coins[ind - 1]],dp [target]);
            }
        }
    }

    if (dp[k] == INT_MAX - 1)
        cout << -1 << endl;
    else
        cout << dp[k] << endl;
}