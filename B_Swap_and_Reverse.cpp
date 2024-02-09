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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        string m = "", y = "", d = "";
        if (!(k&1))
        {
            sort(s.begin(), s.end());
            cout << s << endl;
            continue;
        }
        int f = 0;
        for (int i=0;i<n;i++)
        {
            if (f)
            {
                d += s[i];
            }
            else
            {
                y += s[i];
            }
            f = !f;
        }
        sort(y.begin(), y.end());
        sort(d.begin(), d.end());
        int p = 1;
        for(int i=0,j=0;i<y.size() ||j<d.size();i,j)
        {
            if (p){
                m += y[i];
                i++;

            }
            else{
                m += d[j];
                j++;
            }
            p= !p;
        }
        cout <<m<< endl;
    }
}