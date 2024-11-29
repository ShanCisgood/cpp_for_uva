#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dp[35] = {1, 2, 3};

void init() {
    for (int i = 3; i <= 30; i++) {
        if (i & 1)
            dp[i] = dp[i - 1] * 2 + dp[i - 2];
        else
            dp[i] = dp[i - 1] + dp[i - 2];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    init();
    while (cin >> n && n != -1) {
        cout << (n & 1 ? 0 : dp[n]) << '\n';
    }

    return 0;
}
