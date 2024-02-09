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
        int n, m, k, suma = 0, sumb = 0, mxa = INT_MIN, mna = INT_MAX, mxb = INT_MIN, mnb = INT_MAX;
        cin >> n >> m >> k;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            suma += a[i];
            mxa = max(mxa, a[i]);
            mna = min(mna, a[i]);
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            sumb += b[i];
            mxb = max(mxb, b[i]);
            mnb = min(mnb, b[i]);
        }
        //  sort(a,a+n);
        //  sort(b,b+m);
        if (mna <= mnb)
        {

            if (k % 2==0)
                cout << suma + min(mxa, mxb) - mxa << endl;
            else
                cout << suma - mna + mxb << endl;
        }
        else if (mna >= mxb)
        {
            if (k % 2==0)
                cout << suma + mnb - mxa << endl;
            else
                cout << suma << endl;
        }
        else
        {
            if (k %2==0)
            {
                cout << suma - mna + mxb << endl;
            }
            else
                cout << suma + min(mxa, mxb) - mxa << endl;
        }
    }
}