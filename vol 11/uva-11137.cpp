#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MAXN = 10005, INF = 0xFFFFFFF;
vector<int> coins;

void init() {
    for (int i = 1; i * i * i <= 9261; i++)
        coins.push_back(i * i * i);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    init();

    int n, k = coins.size();
    while (cin >> n) {
        ll dp[MAXN] = {0};
        dp[0] = 1;
        for (int i = 0; i < k; i++)
            for (int j = coins[i]; j <= n; j++)
                dp[j] += dp[j - coins[i]];

        cout << dp[n] << '\n';
    }

    return 0;
}
