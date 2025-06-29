#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MXN = 60;
const ll INF = 1e18;

ll l, n;
ll dp[MXN][MXN], arr[MXN];

void solve() {
    for (int len = 0; len <= n; len++) {
        for (int l = 0, r = len; r <= n; l++, r++)
            dp[l][r] = 0;
    }
    for (int l = 0, r = 2; r <= n; l++, r++)
        dp[l][r] = arr[r] - arr[l];

    for (int len = 3; len <= n; len++) {
        for (int l = 0, r = len; r <= n; l++, r++) {
            dp[l][r] = INF;
            for (int k = l + 1; k < r; k++) {
                dp[l][r] = min(dp[l][r], dp[l][k] + dp[k][r] + arr[r] - arr[l]);
            }
        }
    }
    cout << "The minimum cutting is " << dp[0][n] << ".\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while (cin >> l && l) {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        arr[0] = 0, arr[++n] = l;
        solve();
    }

    return 0;
}
