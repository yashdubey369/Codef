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

int check(int h, vi a)
{
    int n = a.size(), ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += max(1LL * 0, (h - a[i]));
    }
    return ans;
}
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
        vi a(n);
        inp(a);
        int l = 1, r = 1e10;
        // f(i,n){
        //     r=max(r,a[i]);
        // }
        int ans = 0;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (check(mid, a) > m)
            {
                r = mid - 1;
            }
            else
            {
                ans = mid;
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }
}