#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fa(i, a, n) for (int i = a; i < n; i++)
#define f(i, n) fa(i, 0, n)
#define frev(i, n) for (int i = n - 1; i >= 0; i--)
#define fitr(i, m) for (auto i : m)
#define inp(x)                  \
    for (int i = 0; i < n; i++) \
        cin >> x[i];
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<vi> vvi;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> a, b;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            a.pb(s);
        }

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            b.pb(s);
        }


        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < m - 1; j++)
            {
                if (a[i][j] != b[i][j])
                {
                    int d = abs(a[i][j] - b[i][j]);
                    if (a[i][j] > b[i][j])
                        d = 3 - d;
                    a[i][j] = (((a[i][j] - '0') + d) % 3) + '0';
                    a[i + 1][j + 1] = (((a[i + 1][j + 1] - '0') + d) % 3) + '0';
                    a[i][j + 1] = (((a[i][j + 1] - '0') + 3 - d) % 3) + '0';
                    a[i + 1][j] = (((a[i + 1][j] - '0') + 3 - d) % 3) + '0';
                }
            }
        }

        if (a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}