#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a2[n];
        vector<vector<int>> a1(n, vector<int>(2));
        int i = 0;
        while (i < n)
        {
            int m;
            cin >> m;
            int y = 1e9;
            int d = 1e9;
            int j = 0;
            while (j < m)
            {
                int x;
                cin >> x;
                a2[i].push_back(x);
                if (x <= y)
                {
                    d = y;
                    y = x;
                }
                else if (x <= d)
                    d = x;
                j++;
            }
            a1[i][0] = d;
            a1[i][1] = y;
            i++;
        }
        sort(a1.begin(), a1.end());
        int f = 0;
        int p = INT_MAX;
        for (int i = n - 1; i >= 1; i--)
        {
            f += a1[i][0];
            p = min(p, a1[i][1]);
        }
        f += min(p, a1[0][1]);
        cout << f << endl;
    }
}