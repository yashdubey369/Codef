#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fa(i, a, n) for (int i = a; i < n; i++)
#define f(i, n) fa(i, 0, n)
#define inp(x)                  \
    for (int i = 0; i < n; i++) \
        cin >> x[i];
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define parity(a) a % 2
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<vi> vvi;

void yash(int n, vector<int> nums)
{
    int d = 1, ;
    while (d < n)
    {
        if (nums[d] > nums[d - 1])
            nums[d - 1] = 1;
        else if (nums[d] < nums[d - 1])
            nums[d - 1] = -1;
        else
            nums[d - 1] = 0;
    }
    nums[n - 1] = 2;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)

    {
        int n = nums.size();
        int m = pat.size();
        yash(n, nums);

        vector<int> y(m);
        int k = 0;

        y[0] = 0;

        int i = 1;
        while (i < m)
        {
            if (pat[i] == pat[k])
            {
                k++;
                y[i] = k;
                i++;
            }
            else
            {

                if (k != 0)
                {
                    k = y[k - 1];
                }
                else
                {
                    y[i] = 0;
                    i++;
                }
            }
        }

        int f = 0;

        i = 0;
        int j = 0;
        while ((n - i) >= (m - j))
        {
            if (pat[j] == nums[i])
            {
                j++;
                i++;
            }

            if (j == m)
            {
                f++;
                j = y[j - 1];
            }

            else if (i < n && pat[j] != nums[i])
            {

                if (j != 0)
                    j = y[j - 1];
                else
                    i = i + 1;
            }
        }
        return f;
    }
}
}
}