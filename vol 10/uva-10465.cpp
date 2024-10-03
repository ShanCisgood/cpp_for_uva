#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MXN = 1e4 + 5;
ll dp[MXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m, t;
    while (cin >> n >> m >> t) {
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;

        for (int i = n; i <= t; i++)
            if (dp[i - n])
                dp[i] = max(dp[i], dp[i - n] + 1);
        for (int i = m; i <= t; i++)
            if (dp[i - m])
                dp[i] = max(dp[i], dp[i - m] + 1);
        for (int i = t; i >= 0; i--) {
            if (dp[i]) {
                cout << dp[i] - 1;
                if (i != t)
                    cout << ' ' << t - i;
                cout << '\n';
                break;
            }
        }
    }

    return 0;
}
