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
        int n;
        cin >> n;
        int x = 32;
        vi b(x);
        f(i, x - 1)
        {

            if ((n & (1 << i)) <= 0)
                b[i] = 0;
            else
                b[i] = 1;
        }
        int y;
        for (int i = 0; i < x; i = y)
        {
            y = i + 1;
            if (b[i] == 1 && y < x - 1 && b[y] == 1)
            {
                while (y < x && b[y] == 1)
                {
                    y++;
                }
                b[i] = -1;
                int d = i + 1;
                while (d < y)
                {
                    b[d] = 0;
                    d++;
                }
                b[y] = 1;
            }
            i = y;
        }
        int i = x - 1;
        for (i; i >= 0; i--)
        {
            if (b[i])
                break;
        }
        cout << i + 1 << endl;
        for (int y = 0; y < i + 1; y++)
            cout << b[y] << " ";
        cout << endl;
    }
}