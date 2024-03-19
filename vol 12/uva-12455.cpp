#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, p;
        int metal[25], dp[1005] = {0};
        cin >> n >> p;
        for (int i = 0; i < p; i++)
            cin >> metal[i];

        for (int i = 0; i < p; i++) {
            for (int j = n; j >= metal[i]; j--) {
                dp[j] = max(dp[j], dp[j - metal[i]] + metal[i]);
            }
        }

        cout << (n == dp[n] ? "YES" : "NO") << '\n';
    }

    return 0;
}