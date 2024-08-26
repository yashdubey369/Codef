#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m, vector<vector<int>> &games, int q, vector<vector<int>> &que)
{
    for (int i = 0; i < q; i++)
    {
        string s = "";
        for (int j = 0; j < que[i].size(); j++)
        {
            s += que[i][j] + '0';
            // cout<<que[i][j]<<" ";
        }
        // cout<<s<<endl;
        int ans = 0;
        for (int y = 0; y < n; y++)
        {
            string k;
            for (int j = 0; j < m; j++)
            {
                k += games[y][j] + '0';
                if (k == s)
                    ans++;
            }
        }
        cout << ans << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m;
        vector<vector<int>> games(n, vector<int>(m)), que;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> games[i][j];
            }
        }
        cin >> q;
        for (int i = 0; i < q; i++)
        {
            vector<int> v;
            for (int j = 0; j < m; j++)
            {
                int k;
                cin >> k;
                if (k > 0)
                    v.push_back(k);
            }
            que.push_back(v);
        }
        // for(int i=0;i<q;i++){
        //     for(int j=0;j<que[i].size();j++){
        //         cout<<que[i][j]<<" ";
        //     }
        // }
        solve(n, m, games, q, que);
    }
}