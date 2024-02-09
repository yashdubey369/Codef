#include <bits/stdc++.h>
using namespace std;

#define int long long int
void yash(int n,int k,int d,vector<int> &v,vector<int> &m){
        int l = d,res = 0, r = 1;;
        if (2 * n + 1 < d)
            l = 2 * n + 1;
        for (int j = 1; j <= l; j++)
        {
            int y = (d-j)/2, i = 1;
            while (i <= n)
            {
                if (v[i] == i)
                    y++;
                i++;
            }
            i = 1;
            while (i <= m[r])
            {
                v[i++]++;
            }
            r++;
            if (r > k)
                r = 1;
            res = max(res, y);
        }
        cout << res << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, d;
        cin >> n >> k >> d;
        vector<int> v(n + 1), m(k + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        for (int j = 1; j <= k; j++)
        {
            cin >> m[j];
        }
       yash(n,k,d,v,m);
    }
}
