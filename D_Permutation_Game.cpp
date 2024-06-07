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
int calscore(vi p, vi a, int ind, int k)
{
    int n = p.size(), ans = 0, sum = 0, cnt = 1;
    vi vis(n + 1, false);
    while (vis[ind] == false && cnt <= k)
    {
        vis[ind] = true;
        sum += a[ind - 1];
        ans = max(ans, sum + a[ind - 1] * (k - cnt));
        ind = p[ind - 1];
        cnt++;
        // cout<<sum<<" ";
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
        int n, k, pb, ps;
        cin >> n >> k >> pb >> ps;
        vi p(n), a(n);
        inp(p);
        inp(a);
        int ansb = calscore(p, a, pb, k);
        int anss = calscore(p, a, ps, k);

        if (ansb > anss)
            cout << "Bodya" << endl;
        else if (ansb < anss)
            cout << "Sasha" << endl;
        else
            cout << "Draw" << endl;
    }
}