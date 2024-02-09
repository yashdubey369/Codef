#include <bits/stdc++.h>
using namespace std;

#define int long long int
int firstfactor(int n)
{
    int ans = -1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return ans = i;
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
        int l, r, a=-1, b=-1;
        cin >> l >> r;
        if (l == 1 && r <= 3)
        {
            cout << -1 << endl;
            continue;
        }
        if (l != r)
        {
            if (r % 2 == 0)
            {
                a = r / 2;
                b = r / 2;
            }
            else
            {
                a = (r - 1) / 2;
                b = (r - 1) / 2;
            }
        }
        else
        {
            for (int i = 2; i * i <= l; i++)
            {
                if (l % i == 0){
                    a=i;
                    b=l-a;
                }
                     
            }
            // a = firstfactor(l);
            // b = l - a;
        }
        if (a == -1 || a == 1 || b == 1)
            cout << -1 << endl;
        else
            cout << a << " " << b << endl;
    }
}