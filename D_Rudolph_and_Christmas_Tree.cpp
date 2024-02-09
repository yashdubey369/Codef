#include <bits/stdc++.h>
using namespace std;

#define int long long int
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cout << setprecision(13);

        int n, b, h;
        cin >> n >> b >> h;

        vector<int> y(n);

        for (auto &i : y)
            cin >> i;

        sort(y.begin(), y.end());

        int mn = 0;

        vector<int> v;
        int i = 0;
        while (i < n)
        {

            if (mn > y[i])
            {

                v.push_back(mn - y[i]);
            }

            mn = y[i] + h;
            i++;
        }

        double res = b * h * n;
        res /= 2;

        double final = 0;

        for (int i = 0; i < v.size(); i++)
        {
            final += v[i] * v[i];
        }

        final /= 2;
        final /= h;
        final *= (b);

        res -= final;

        cout << res << endl;
    }
}