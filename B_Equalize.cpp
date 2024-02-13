#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fa(i, a, n) for (int i = a; i < n; i++)
#define f(i, n) fa(i, 0, n)
#define frev(i, n) for (int i = n - 1; i >= 0; i--)
#define fitr(i, m) for (auto i : m)
#define inp(v)  for (int i = 0; i < n; i++) cin >> v[i];
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(i) i.begin(), i.end()
#define clr(i) memset(i, 0, sizeof(i))

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
        int n;
        cin >> n;
        vi a(n),v;
        inp(a);
        int ans = 1;
        vi::iterator ip;
        sort(all(a));
        ip = unique(a.begin(), a.begin()+n);
        a.resize( distance(a.begin(), ip));
        f(i, a.size())
        { 
            // cout<<a[i]<<" ";
            int d = a[i] + n - 1;
            ans = max(ans, upper_bound(a.begin(), a.end(), d) - a.begin() - i);
        }
        cout <<ans<< endl;
    }
}
