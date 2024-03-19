#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // x + y = m
    // x - y = n
    // 2y = m - n
    // x = m - (m - n) / 2 = (m + n) / 2
    int test;
    cin >> test;
    while (test--) {
        int m, n, x, y;
        cin >> m >> n;
        x = (m + n) / 2, y = (m - n) / 2;
        if (x < 0 || y < 0 || ((m + n) & 1) || (m - n) & 1)
            cout << "impossible\n";
        else
            cout << x << ' ' << y << '\n';
    }

    return 0;
}
