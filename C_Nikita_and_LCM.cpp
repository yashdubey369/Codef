#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fa(i, v, n) for (int i = v; i < n; i++)
#define d(i, n) fa(i, 0, n)
#define frev(i, n) for (int i = n - 1; i >= 0; i--)
#define fitr(i, c) for (auto i : c)
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

int gcd(int v, int b)
{
    if (b == 0)
        return v;
    return gcd(b, v % b);
}
//recur
int solve(vector<int> &arr, int lcm, int n, int i, map<int, int> &c, int d)
{
    if (i == n)
        return 0;

    int take = 0, nottake = 0;
    int k = lcm * arr[i] / gcd(lcm, arr[i]);
    if (c.find(k) == c.end() || d == -1)
    {
        // c[arr[i]]++;
        take = (1 + solve(arr, k, n, i + 1, c, 1));
        // c[arr[i]]--;
    }
    nottake = solve(arr, lcm, n, i + 1, c, d);
    return max(take, nottake);
}
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
        vi v(n);
        inp(v);
        int y = 0;
        sort(v.begin(), v.end());
        map<int, int> c;
        d(i, n) c[v[i]]++;
        vector<int> arr;
        fitr(i, c)
        {
            arr.push_back(i.first);
        }

        for (int i = arr.size() - 1; i >= 0; i--)
        {
             
            int final = c[arr[i]];
            int d = 0;
            for (int j = i - 1; j >= 0; j--)
            {
                
                int lcm = arr[i] * arr[j] / gcd(arr[i], arr[j]);

                if (lcm > arr[arr.size()-1])
                {
                    d = 1;
                    final = n;
                    break;
                }
                if (c[lcm] > 0 && lcm != arr[i])
                {
                    continue;
                }
                final = final + c[arr[j]];
                arr[i] = lcm;
                if (c.find(arr[i]) == c.end())
                {
                    y = max(y, final);
                }
            }
            if (d)
            {
                y = n;
                break;
            }

            if (final == 1||c[arr[i]] > 0)
            {
                continue;
            }
            y = max(y, final);
            if (y == n)
            {
                break;
            }
        }
        cout << y << endl;
    }
}
