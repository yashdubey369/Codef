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
        int q;
        cin >> q;

        vector<int> a;
        vector<int> ans;

        int hb = 0;

        while (q--)
        {
           int x;
            cin >> x;
            if (!a.size())
            {
                a.push_back(x);
                ans.push_back(1);
            }
            else
            {
                if (hb)
                {
                    if (x < a.back() || x > a[0])
                    {
                        ans.push_back(0);
                    }
                    else
                    {
                        a.push_back(x);
                        ans.push_back(1);
                    }
                }
                else
                {
                    if (x < a.back())
                    {
                        if (x > a[0])
                        {
                            ans.push_back(0);
                            continue;
                        }
                        hb = 1;
                    }
                    ans.push_back(1);
                    a.push_back(x);
                }
            }
        }

        for (int i : ans)
            cout << i;
        cout << "\n";
    }
}
 