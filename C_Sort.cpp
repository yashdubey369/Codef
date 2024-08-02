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
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;
        vvi p1(n + 1, vi(26)), p2(n + 1, vi(26));
        fa(i, 1, n + 1)
        {
            p1[i][a[i - 1] - 'a']++;
            f(j, 26)
            {
                p1[i][j] += p1[i - 1][j];
            }
            p2[i][b[i - 1] - 'a']++;
            f(j, 26)
            {
                p2[i][j] += p2[i - 1][j];
            }
        }
        // f(i,n+1){
        //     f(j,26)cout<<p1[i][j]<<" ";
        //     cout<<endl;
        // }
        // cout << endl;
        f(i, q)
        {
            int ans = 0;
            int l, r;
            cin >> l >> r;
            f(j, 26)
            {
                ans += abs((p1[r][j] - p1[l - 1][j]) - (p2[r][j] - p2[l - 1][j]));
            }
            cout << ans / 2 << endl;
        }
    }
}