#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int  t;
    cin >> t;
    while (t--)
    {
        int  n, ans = 0,mn=INT_MAX,j;
        cin >> n;
        int a[n];
        // vector<pair<int , int >> y;
        for (int  i = 0; i < n; i++)
        {
            cin >> a[i];
            if(mn>a[i]){
                mn=a[i];
                j=i;
            }
            // y.push_back({a[i], i});
        }
        // sort(y.rbegin(), y.rend());

        int  mx = a[0];

        for (int  i = 0; i < j; i++)

        {
            mx = max(mx, a[i]);
            a[i] = mx;
        }
        mx = a[n - 1];
        for (int  i = n - 1; i > j; i--)
        {
            // mx = max(mx, a[i]);
            a[i] = a[j];
        }
        for (int  i = 0; i < n; i++)
        {
            // cout<<a[i]<<" ";
            ans += a[i];
        }
        // cout<<endl;
        cout << ans << endl;
    }
    return 0;
}