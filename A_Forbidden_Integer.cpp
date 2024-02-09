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
        int n, k, x, j = 1;
        cin >> n >> k >> x;
        vector<int> v;
        if (x != 1)
        {
            cout << "YES" << endl;
            cout << n<< endl;
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            if (k == 1)
                cout << "NO" << endl;
            else if (n % 2 == 0)
            {
                cout << "YES" << endl;
                cout << n / 2 << endl;
                for (int i = 0; i < n / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout << endl;
            }
            else
            {
                if (k == 2)
                    cout << "NO" << endl;
                else
                {
                    cout << "YES" << endl;
                    int y = (n / 2) - 1;
                    cout << 1 + y << endl;
                    for (int i = 0; i < y; i++)
                    {
                        cout << 2 << " ";
                    }
                    cout << 3 << " ";
                    cout << endl;
                }
            }
        }
    }
}