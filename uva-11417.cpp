#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b) {
    while (b) {
        int r = a % b;  // a = b*q + r
        a = b;
        b = r;
    }
    return a;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while (cin >> n && n) {
        int ans = 0;
        for (int i = 1; i < n; i++) {
            for (int j = i + 1; j <= n; j++)
                ans += GCD(i, j);
        }
        cout << ans << '\n';
    }

    return 0;
}
