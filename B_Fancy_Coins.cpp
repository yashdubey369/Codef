#include <bits/stdc++.h>
using namespace std;

#define int long long int
void yash(int am, int k, int a1, int y)
{
    if (am < a1 || k * y == am)
    {
        cout << 0 << endl;
    }
    else
    {
        int ans = ceil((double)(am - a1) / k);
        if (ans * k > am)
            ans--;
        if (ans > y)
        {
            if ((a1 >= (am - (ans)*k)))
                cout << ans - y << endl;
            else
                cout << ans - y + (am - (ans)*k) - a1 << endl;
            return;
        }
        if ((a1 >= (am - (ans)*k)))
            cout << 0 << endl;
        else
            cout << (am - (ans)*k) - a1 << endl;
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {

        int am, k, a1, y;
        cin >> am >> k >> a1 >> y;
        yash(am, k, a1, y);
    }
}
