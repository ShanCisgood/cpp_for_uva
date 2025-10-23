#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MXN = 45;
ll dp[MXN];
int t, n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    dp[0] = 1, dp[1] = 1, dp[2] = 5;
    for (int i = 3; i < MXN; i++)
        dp[i] = dp[i - 1] + (dp[i - 2] << 2) + (dp[i - 3] << 1);

    cin >> t;
    while (t--) {
        cin >> n;
        cout << dp[n] << '\n';
    }

    return 0;
}
