#include <bits/stdc++.h>
using namespace std;

const int N = 105;
int dp[N][N], a[N], b[N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m, cnt = 1;
    while (cin >> n >> m && (n || m)) {
        cout << "Twin Towers #" << cnt++ << '\n';

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i] == b[j])
                    dp[i + 1][j + 1] = dp[i][j] + 1;
                else
                    dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
            }
        }

        cout << "Number of Tiles : " << dp[n][m] << "\n\n";
    }
    return 0;
}
