#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MAXN = 3e4 + 5;
ll coins[5] = {1, 5, 10, 25, 50}, n = 5;
ll dp[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = coins[i]; j < MAXN; j++)
            dp[j] += dp[j - coins[i]];
    }

    while (cin >> n) {
        if (dp[n] == 1)
            cout << "There is only 1 way to produce " << n << " cents change.\n";
        else
            cout << "There are " << dp[n] << " ways to produce " << n << " cents change.\n";
    }

    return 0;
}
