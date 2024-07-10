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
typedef priority_queue<pi, vector<pi>, greater<pi>> pqm;



signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int h, n, mxattk = 0;
        cin >> h >> n;
        map<int, int> m;
        vi a(n), b(n);
        inp(a);
        inp(b);
        f(i, n)
        {
            m[b[i]] += a[i];
            mxattk += a[i];
        }
        h -= mxattk;
        if (h <= 0)
        {
            cout << 1 << endl;
            // cout<<endl;
            continue;
        }
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        for (auto i : m)
        {
            pq.push({i.fi, {i.fi, i.se}});
        }
        int turns = 0;
        while (h > 0)
        {
            int nxtcoold = pq.top().fi;
            int coold = pq.top().se.fi;
            int attck = pq.top().se.se;
            pq.pop();

            h -= attck;
            turns += abs(nxtcoold - turns);

            pq.push({turns + coold, {coold, attck}});
        }
        cout << turns + 1 << endl;
    }
}