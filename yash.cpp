#include<bits/stdc++.h>
using namespace std;

#define int long long int
void tarini(int n, int a, int b, int c, string d) {
    if (n == 0) {
        cout << d << endl;
        return;
    }

    if (a > 0) {
        tarini(n - 1, a - 1, b, c, d + 'A');
    }
    if (b > 0) {
        tarini(n - 1, a, b - 1, c, d + 'B');
    }
    if (c > 0) {
        tarini(n - 1, a, b, c - 1, d + 'C');
    }
}

signed main() {
    int n, a, b, c;
    cin >> n>> b>>c>>a;

    tarini(n, a, b, c, "");

    return 0;
}