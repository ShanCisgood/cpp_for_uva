#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MXN = 65;
ll dp[MXN][MXN];
int t;

void solve() {
    int n;
    string s;
    cin >> s;
    n = s.size();
    for (int i = 1; i <= n; i++)
        dp[i][i] = 1;
    for (int len = 1; len <= n; len++) {
        for (int l = 1, r = len + l; r <= n; l++, r++) {
            if (s[l - 1] != s[r - 1]) {
                dp[l][r] = dp[l + 1][r] + dp[l][r - 1] - dp[l + 1][r - 1];
            }
            else {
                dp[l][r] = dp[l + 1][r] + dp[l][r - 1] + 1;
            }
        }
    }

    // for (int l = 1; l <= n; l++) {
    //     for (int r = 1; r <= n; r++)
    //         cout << dp[l][r] << " \n"[r == n];
    // }

    cout << dp[1][n] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
