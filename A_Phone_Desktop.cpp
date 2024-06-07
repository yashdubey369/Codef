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
        int x, y;
        cin >> x >> y;
        if (x == 0 && y == 0)
        {
            cout << 0 << endl;
            continue;
        }
        int j = ceil((double)(y) / (double)(2));
        int ans = max(1LL, j);
        
        int r = 15 * ans - 4 * y;
        if (x > r)
        {
            x -= r;
            x = ceil((double)(x) / (double)(15));
            ans += x;
        }
        cout << ans << endl;
    }
}