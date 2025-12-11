#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s, t;
    while (getline(cin, s)) {
        getline(cin, t);
        int n = s.length(), m = t.length();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (s[i] == t[j])
                    dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + 1);
                else
                    dp[i + 1][j + 1] = max({dp[i + 1][j + 1], dp[i + 1][j], dp[i][j + 1]});
            }
        }
        cout << dp[n][m] << '\n';
    }

    return 0;
}
