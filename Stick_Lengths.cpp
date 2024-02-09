#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, sum = 0, ans = 0, k, mx = INT_MIN;
    cin >> n;
    int a[n];
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // sum+=a[i];
        m[a[i]]++;
    }
    sort(a, a + n);
    if (n % 2)
    {
        k = a[n / 2];
        for (int i = 0; i < n; i++)
        {
            ans += abs(a[i] - k);
        }
    }
    else
    {
        int k1 = a[n / 2], k2 = a[n / 2 - 1], a1 = 0, a2 = 0;
        for (int i = 0; i < n; i++)
        {
            a1 += abs(a[i] - k1);
            a2 += abs(a[i] - k2);
        }
        ans = min(a1, a2);
    }
    // for(auto i:m){
    //     if(i.second>mx){
    //         mx=i.second;
    //         k=i.first;
    //     }
    // }

    cout << ans << endl;
}
