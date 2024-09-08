#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MAXN = 2e5 + 5;
ll dp[MAXN][2];  // 0: 母 1: 公

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    dp[0][0] = 1;
    for (int i = 1; i < MAXN; i++) {
        dp[i][0] = dp[i - 1][1] + 1;
        dp[i][1] = dp[i - 1][0] + dp[i - 1][1];
    }
    int n;
    while (cin >> n && n != -1)
        cout << dp[n][1] << ' ' << dp[n][0] + dp[n][1] << '\n';

    return 0;
}
