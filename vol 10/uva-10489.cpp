#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, n, m, x, y, z;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int ans = 0;
        while (m--) {
            cin >> x;
            z = 1;
            while (x--) {
                cin >> y;
                z = z * y % n;
            }
            ans += z, ans %= n;
        }
        cout << ans << '\n';
    }

    return 0;
}
