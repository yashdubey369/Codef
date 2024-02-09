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
        int n,cnta = 0, cntb = 0;
        cin >> n;
        int y = INT_MAX, d = INT_MAX;
        while(n--)
        {
            int s;
            cin >> s;
            if (y > d){
                int j=d;
                d=y;
                y=j;
            }
            if (s <= y)
                y = s;
            else if (s <= d)
                d = s;
            else
            {
                y = s;
                cnta++;
            }
        }

        cout << (cnta + cntb) << endl;
    }
}