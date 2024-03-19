#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

const int MAXN = 105;
ull dp[MAXN][MAXN];

void init() {
    for (int i = 0; i <= 100; i++)
        dp[i][0] = dp[i][i] = 1;
}

ull comb(int n, int k) {
    if (dp[n][k])
        return dp[n][k];
    else {
        for (int i = 1; i <= n; i++)
            for (int j = 1; j < n; j++)
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];

        return dp[n][k];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    init();
    int n, k;
    while (cin >> n >> k && (n && k)) {
        cout << n << " things taken " << k << " at a time is " << comb(n, k) << " exactly.\n";
    }

    return 0;
}
