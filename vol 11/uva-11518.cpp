#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e4 + 5;
vector<int> graph[MAXN];
bool vis[MAXN];

void dfs(int u, int pre) {
    vis[u] = true;
    for (int v : graph[u]) {
        if (v == pre || vis[v])
            continue;
        dfs(v, u);
    }
}

void init(int n) {
    memset(vis, false, sizeof(vis));
    for (int i = 0; i <= n; i++)
        graph[i].clear();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, n, m, l, x, y;
    cin >> t;

    while (t--) {
        cin >> n >> m >> l;
        init(n);
        for (int i = 0; i < m; i++) {
            cin >> x >> y;
            graph[x].push_back(y);
        }
        while (l--) {
            cin >> x;
            dfs(x, 0);
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
            ans += vis[i];
        cout << ans << '\n';
    }

    return 0;
}
