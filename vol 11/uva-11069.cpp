#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MXN = 80;
ll dp[MXN][2];

void init() {
    // 如果長度 i，but 不拿 i
    dp[1][0] = 0, dp[1][1] = 1;  // {1}
    dp[2][0] = 1, dp[2][1] = 1;  // {1}, {2}
    dp[3][0] = 1, dp[3][1] = 1;  // {2}, {1, 3}
    // dp[4][0] = 1, dp[4][1] = 2;  // {1, 3}, {2, 4}, {1, 4}

    for (int i = 4; i < MXN; i++) {
        dp[i][0] = dp[i - 1][1];
        dp[i][1] = dp[i - 2][1] + dp[i - 3][1];
    }

    // for (int i = 1; i <= 30; i++)
    //     cout << i << " : " << dp[i][0] << " , " << dp[i][1] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    init();

    int n;
    while (cin >> n)
        cout << dp[n][0] + dp[n][1] << '\n';

    return 0;
}
