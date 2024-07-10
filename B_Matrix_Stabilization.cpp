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
        vvi a(n, vi(m));
        f(i, n)
        {
            f(j, m)
            {
                cin >> a[i][j];
            }
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        f(i, n)
        {
            f(j, m)
            {
                int flag = 1;
                if (i - 1 >= 0 && a[i - 1][j] > a[i][j])
                    flag = 0;
                if (i + 1 < n && a[i + 1][j] > a[i][j])
                    flag = 0;
                if (j - 1 >= 0 && a[i][j - 1] > a[i][j])
                    flag = 0;
                if (j + 1 < m && a[i][j + 1] > a[i][j])
                    flag = 0;
                if (flag)
                {
                    pq.push({i, j});
                }
            }
        }
        while (!pq.empty())
        {
        int y=0,b=0,c=0,d=0;
            int i = pq.top().first;
            int j = pq.top().second;
            // cout<<a[i][j]<<"->";
            pq.pop();
            if (i - 1 >= 0)
                y = a[i-1][j];
            if (i + 1 < n )
                b=a[i+1][j];
            if (j - 1 >= 0)
                c=a[i][j-1];
            if (j + 1 < m )
                d=a[i][j+1];
            a[i][j]=max(y,max(b,max(c,d)));
            // cout<<y<<" "<<b<<" "<<c<<" "<<d<<" "<<a[i][j]<<endl;
        }
        // cout<<endl;

        f(i,n){
            f(j,m){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}