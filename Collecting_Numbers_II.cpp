#include <bits/stdc++.h>
using namespace std;

#define int long long int
int solve(vector<pair<int, int>> v, int n)
{
    sort(v.begin(), v.end());
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i].second < v[i - 1].second)
            ans++;
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n>>m;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, i});
    }
    int ans=solve(v, n);
    while(m--){
        int x,y,xi,yi;
        cin>>x>>y;
        // vector<pair<int,int>> s=v;
        if(x<y && v[x-1].first>v[y-1].first) ans--;
        else ans++;
        swap(v[x-1].first,v[y-1].first);
        // cout<<xi<<" " <<yi<<endl;

    }
}