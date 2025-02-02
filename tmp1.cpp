#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;

const int N = 55;
int g[N][N], n, m;
vector<pii> ans;

bool in_range(int x, int y) { return (x >= 1 && y >= 1) && (x <= n && y <= m); }

int manhattan_dis(int x1, int y1, int x2, int y2) { return abs(x1 - x2) + abs(y1 - y2); }

bool check(int x, int y) {
    int s = 0;
    for (int i = -9; i <= 9; i++) {
        for (int j = -9; j <= 9; j++) {
            int dx = x + i, dy = y + j;
            if (in_range(dx, dy) && manhattan_dis(x, y, dx, dy) <= g[x][y]) {
                s += g[dx][dy];
            }
        }
    }
    return (s % 10 == g[x][y]);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            cin >> g[i][j];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (check(i, j))
                ans.push_back(make_pair(i, j));
        }
    }

    cout << ans.size() << '\n';
    for (pii &i : ans)
        cout << i.first << ' ' << i.second << '\n';

    return 0;
}
