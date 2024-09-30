#include <bits/stdc++.h>
#define PB push_back
#define SZ(x) (int)(x.size())
using namespace std;

const int MXN = 505, INF = INT_MAX;

struct Dinic {
    struct Edge {
        int v, f, re;
    };
    int n, s, t, level[MXN];
    vector<Edge> E[MXN];
    void init(int _n, int _s, int _t) {
        n = _n;
        s = _s;
        t = _t;
        for (int i = 0; i < n; i++)
            E[i].clear();
    }
    void add_edge(int u, int v, int f) {
        E[u].PB({v, f, SZ(E[v])});
        E[v].PB({u, 0, SZ(E[u]) - 1});
    }
    bool BFS() {
        for (int i = 0; i < n; i++)
            level[i] = -1;
        queue<int> que;
        que.push(s);
        level[s] = 0;
        while (!que.empty()) {
            int u = que.front();
            que.pop();
            for (auto it : E[u]) {
                if (it.f > 0 && level[it.v] == -1) {
                    level[it.v] = level[u] + 1;
                    que.push(it.v);
                }
            }
        }
        return level[t] != -1;
    }
    int DFS(int u, int nf) {
        if (u == t)
            return nf;
        int res = 0;
        for (auto &it : E[u]) {
            if (it.f > 0 && level[it.v] == level[u] + 1) {
                int tf = DFS(it.v, min(nf, it.f));
                res += tf;
                nf -= tf;
                it.f -= tf;
                E[it.v][it.re].f += tf;
                if (nf == 0)
                    return res;
            }
        }
        if (!res)
            level[u] = -1;
        return res;
    }
    int flow(int res = 0) {
        while (BFS())
            res += DFS(s, 2147483647);
        return res;
    }
} flow;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int cas = 0, n, s, t, c;
    while (cin >> n && n) {
        cin >> s >> t >> c;
        flow.init(n + 2, s, t);
        while (c--) {
            int u, v, w;
            cin >> u >> v >> w;
            flow.add_edge(u, v, w);
            flow.add_edge(v, u, w);
        }
        int ans = flow.flow();
        cout << "Network " << ++cas << '\n' << "The bandwidth is " << ans << ".\n\n";
    }

    return 0;
}
