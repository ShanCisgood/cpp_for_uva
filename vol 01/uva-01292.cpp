#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2000;
int n, dp[MAXN][2];
bool vis[MAXN];
vector<int> graph[MAXN];

void dfs(int u) {
    dp[u][1] = 1;
    dp[u][0] = 0;
    vis[u] = true;

    for (int v : graph[u]) {
        if (vis[v])
            continue;
        dfs(v);

        dp[u][0] += dp[v][1];
        dp[u][1] += min(dp[v][0], dp[v][1]);
    }
}

void init() {
    memset(vis, false, sizeof(vis));
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++)
        graph[i].clear();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while (cin >> n) {
        init();
        int u, v, num, ans = 0;
        char c;

        for (int i = 0; i < n; i++) {
            cin >> u >> c >> c >> num >> c;
            while (num--) {
                cin >> v;
                graph[u].push_back(v);
                graph[v].push_back(u);
            }
        }

        for (int i = 0; i < n; i++) {
            if (vis[i])
                continue;
            dfs(i);
            ans += min(dp[i][0], dp[i][1]);
        }

        cout << ans << '\n';
    }

    return 0;
}
