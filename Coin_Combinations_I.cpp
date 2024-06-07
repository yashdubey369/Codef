#include <bits/stdc++.h>
using namespace std;

#define int long long int
int coin(int n,int target ,vector<int> &coins){
    if(n>=0 && target==0) return 1;
    if(n>=0 && target<0||n<0) return 0;
    if(target>=coins[n-1]){
        return coin(n-1,target,coins)+coin(n,target-coins[n-1],coins);
   }
   return coin(n-1,target,coins);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, mod = 1e9 + 7;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout<<coin(n,k,v);
//     vector<int> dp(k + 1, 0);
//     dp[0] = 1;
//     for (int i = 1; i <= k; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (v[j] > i)
//                 continue;
//             dp[i] += dp[i - v[j]];
//             dp[i] %= mod;
//         }
//     }
//     cout << dp[k] << endl;
}