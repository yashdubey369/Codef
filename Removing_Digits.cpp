#include <bits/stdc++.h>
using namespace std;

#define int long long int
// Memoisation
//  int Memoisation(int n,int ans,vector<int> &dp){
//      if(n==0) return 0;
//      if(dp[n]!=-1) return dp[n];
//      int y=n;
//      while(y){
//          int k;
//          int j=y%10;
//          y/=10;
//          if(j==0) continue;
//          k=1+Memoisation(n-(j),ans,dp);
//          ans=min(ans,k);
//      }
//      return dp[n]=ans;
//  }
int Tabulation(int n, vector<int> &dp)
{
    dp[0] = 0;
    for (int i = 0; i <= n; i++)
    {
        int y = i;
        while (y)
        {
            int k;
            int j = y % 10;
            y /= 10;
            if (j == 0)
                continue;
            k = 1 + dp[i - (j)];
            dp[i] = min(dp[i], k);
        }
    }
    return dp[n];
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> dp(n + 1, 1e9);

    // Memoisation:
    //  int k=Memoisation(n,ans,dp);

    // Tabulation:
    int k = Tabulation(n, dp);
    
    //Print answer:
    cout<<k;
       
}