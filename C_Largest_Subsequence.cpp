#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void yash()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int y = 26;
    vector<int> a;
    vector<int> v[y];

    int d = 0;

    for (int i = 0; i < n; i++)
    {
        v[s[i] - 'a'].push_back(i);
        d = max(d, s[i] - 'a');
    }

    int r = -1;
    int i = y - 1;
    while (i >= 0)
    {
        for (int j : v[i])
        {
            if (j > r)
            {
                a.push_back(j);
                r = j;
            }
        }
        i--;
    }

    int m = a.size();

    string s1 = s;
    i = 0;
    while (i < m)
    {
        s1[a[i]] = s[a[m - 1 - i]];
        i++;
    }
    int flag = is_sorted(s1.begin(), s1.end());
    if (!flag)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << (m - v[d].size()) << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        yash();
    }

    return 0;
}
