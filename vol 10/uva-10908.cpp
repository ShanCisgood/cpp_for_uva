#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e2 + 5;
char grid[MAXN][MAXN];
int m, n;

bool in_range(int x, int y) { return (x >= 0 && y >= 0) && (x < m && y < n); }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, q, r, c;
    cin >> t;

    while (t--) {
        cin >> m >> n >> q;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> grid[i][j];

        cout << m << ' ' << n << ' ' << q << '\n';
        while (q--) {
            cin >> r >> c;
            bool isTrue = true;
            int cnt = 0;
            for (int i = 0; i < n && isTrue; i++) {
                for (int j = r - i; j <= r + i; j++) {
                    for (int k = c - i; k <= c + i; k++) {
                        if (!in_range(j, k) || grid[r][c] != grid[j][k])
                            isTrue = false;
                    }
                }
                cnt += isTrue;
            }
            cout << 2 * cnt - 1 << '\n';
        }
    }

    return 0;
}
