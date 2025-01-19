#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAXN = 105;
const ll INF = 1e18;

ll dis[MAXN][MAXN];

void init(int n) {
    for (int i = 0; i <= n; i++) {  // 初始化
        for (int j = 0; j <= n; j++)
            dis[i][j] = INF;
        dis[i][i] = 0;
    }
}

void floyd_warshall(int n) {
    for (int k = 1; k <= n; k++) {  // 窮舉中繼點 k
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {  // 窮舉點對 (i, j)
                if (max(dis[i][k], dis[k][j]) < dis[i][j])
                    dis[i][j] = max({dis[i][k], dis[k][j]});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m, q, c = 1;
    // cout << "hi\n";
    while (cin >> n >> m >> q) {
        if (n == 0 && m == 0 && q == 0)
            break;
        init(n);
        while (m--) {
            int u, v;
            ll w;
            cin >> u >> v >> w;
            dis[u][v] = dis[v][u] = w;
        }

        if (c > 1)
            cout << '\n';
        cout << "Case #" << c++ << '\n';
        floyd_warshall(n);

        while (q--) {
            int a, b;
            cin >> a >> b;
            if (dis[a][b] == INF)
                cout << "no path\n";
            else
                cout << dis[a][b] << '\n';
        }
    }

    return 0;
}
