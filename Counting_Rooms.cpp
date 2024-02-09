#include <bits/stdc++.h>
using namespace std;

#define int long long int
int vis[1001][1001];
int adjm[1001][1001];
int delrow[4] = {0, 0, -1, 1};
int delcol[4] = {1, -1, 0, 0};
// vector<vector<int>> adjm(n,vector<int> (m));
void dfs(int n, int m, int r, int c)
{
    vis[r][c] = 1;
    for (int i = 0; i < 4; i++)
    {
        int nr = r + delrow[i];
        int nc = c + delcol[i];
        if (nr >= 0 && nr < n && nc >= 0 && nc < m && adjm[nr][nc]==0)
        {
            if (!vis[nr][nc])
                dfs(n, m, nr, nc);
        }
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    // vector<vector<int>> adjm(1001, vector<int>(1001));
    // vector<vector<int>> vis(1001, vector<int>(1001));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char ch;
            cin >> ch;
            if (ch == '#')
            {
                adjm[i][j] = 1;
                vis[i][j] = 1;
            }
            else{
                adjm[i][j] = 0;
                vis[i][j] = 0;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (adjm[i][j] == 0)
            {
                if (!vis[i][j])
                {
                    cnt++;
                    dfs(n, m, i, j);
                }
            }
        }
    }
    cout << cnt << endl;
}