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
        int n;
        cin >> n;
        vector<pair<int, int>> a, b, c;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back({x, i});
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back({x, i});
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            c.push_back({x, i});
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        int x=-1,y=-1,z=-1,ans=-1;
        for (int i = n - 1; i >= n - 3; i--)
        {
            for (int j = n - 1; j >= n - 3; j--)
            {
                for (int k = n - 1; k >= n - 3; k--)
                {
                    // cout<<a[i].second<<" "<<b[j].second<<" "<<c[k].second <<endl;
                    if(a[i].second!=b[j].second && b[j].second!=c[k].second && a[i].second!=c[k].second){
                         ans=max(ans,a[i].first+b[j].first+c[k].first);
                    }
                }
            }
        }
        cout<<ans<<endl;
        // cout<<endl;
    }
}