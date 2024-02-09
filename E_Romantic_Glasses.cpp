#include <bits/stdc++.h>
using namespace std;
#define int long long int
void yash(vector<int> &a, int n)
{
    unordered_map<int, int> mpp;
    bool flag = false;
    int y = 0;
    for (int i = 0; i < n; i++)
    {
        if (1 & i)
        {
            y -= a[i];
        }
        else
        {
            y += a[i];
        }
        if (y == 0 || mpp.find(y) != mpp.end())
            flag = 1;
        mpp[y]++;
    }
    if (!flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        yash(a, n);
    }
}