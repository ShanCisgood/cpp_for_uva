#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        ll ans = 0, n;
        cin >> n;
        for (ll i = 1, r; i <= n; i = r + 1) {
            r = n / (n / i);
            ans += (n / i) * (r - i + 1);
        }
        cout << ans << '\n';
    }

    return 0;
}
