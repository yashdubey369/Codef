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
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> v(n);
        v[n - 1] = b;
        int k = 1;
        n = n - 2;
        int i = n;
        while (i >= 0)
        {
            v[i] = v[i + 1] - k;
            k++;
            i--;
        }
        if (a <= v[0])
        {
            v[0] = a;
            for (auto i : v)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
            cout << "-1" << endl;
    }
}
