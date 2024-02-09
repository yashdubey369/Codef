#include <bits/stdc++.h>
using namespace std;

#define int long long int
bool sc(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
        return (a.second > b.second);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, h;
        cin >> n >> m >> h;
        vector<pair<int, int>> p;
        for (int i = 0; i < n; i++)
        {
            int a[m];
            int penalty = 0, y = 0, ts = 0;
            // int prefix[m+1];
            // prefix[0]=0;
            for (int j = 0; j < m; j++)
            {
                cin >> a[j];
            }
            sort(a, a + m);
            // for(int j=0;j<m;j++) prefix[j+1]=prefix[j]+a[j];
            for (int j = 0; j < m; j++)
            {
                // cout<<prefix[j]<<" ";
                if (ts + a[j] <= h)
                {
                    ts += a[j];
                    penalty += ts;
                    y++;
                }
                else
                    break;
            }
            // cout<<penalty<<" ";
            // cout<<endl;
            p.push_back({y, penalty});
        }
        int r = p[0].first;
        int l = p[0].second;
        int ans=0;
        sort(p.begin(),p.end(),sc);
        for(int i=n-1;i>=0;i--){
            // cout<<p[i].first<<" "<<p[i].second<<" ";
            if(p[i].first==r&& p[i].second==l) {
                cout<<n-i<<endl;
                break;
            }
        }
        
        // cout<<endl;
        // cout<<r<<" "<<l<<endl;
    }
}