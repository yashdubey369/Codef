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
        int n, p;
        cin >> n >> p;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push(make_pair(b[i], -a[i]));
        }
        //  for(auto i:a) cout<<i<<endl;
        int cnt = n - 1, ans = 0, res = p * n;
        while (!pq.empty())
        {
            if (pq.top().first >= p)
            {
                ans += (cnt)*p;
                break;
            }
            ans += pq.top().first * min(abs(pq.top().second), cnt);
            cnt -= abs(pq.top().second);
            if (cnt <= 0)
                break;
            // cout<<pq.top().first<<" "<<abs(pq.top().second)<<endl;
            pq.pop();
        }
        ans += p;
        cout << min(res, ans) << endl;
    }
}