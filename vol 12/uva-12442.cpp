#include <bits/stdc++.h>
using namespace std;

const int MAXN = 5e4 + 5;
vector<int> graph[MAXN];
bool vis[MAXN], flad[MAXN];
int cnt = 0, ret = 0, idx = 1;

void dfs(int u) {
    vis[u] = true;
    cnt++;
    for (int v : graph[u]) {
        if (vis[v])
            continue;
        dfs(v);
    }
    vis[u] = false;
    flad[u] = true;
}

void init(int n) {
    cnt = 0, ret = 0, idx = 1;
    for (int i = 0; i <= n; i++) {
        vis[i] = flad[i] = false;
        graph[i].clear();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, n, u, v;
    cin >> t;
    for (int c = 0; c < t; c++) {
        cin >> n;
        init(n);
        for (int i = 0; i < n; i++) {
            cin >> u >> v;
            graph[u].push_back(v);
        }
        for (int i = 1; i <= n; i++) {
            if (flad[i])
                continue;
            cnt = 0;
            dfs(i);
            if (ret < cnt) {
                ret = cnt;
                idx = i;
            }
        }
        cout << "Case " << c + 1 << ": " << idx << '\n';
    }

    return 0;
}
