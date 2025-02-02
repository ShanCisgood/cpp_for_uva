#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MXN = 305;
const double eps = 1e-9;

vector<int> g[MXN];
bool vis[MXN];
int S[MXN];     // S 為紀錄這個點與誰匹配
int n, p, ans;  // n: 左集合數量, p: 右集合數量

bool dfs(int u) {  // 找最大匹配
    for (int &v : g[u]) {
        if (!vis[v]) {
            vis[v] = true;
            if (S[v] == -1 || dfs(S[v])) {
                S[v] = u;
                return true;
            }
        }
    }
    return false;
}

void solve() {  // 記得每次使用需清空 vis
    memset(S, -1, sizeof(S));
    ans = 0;
    for (int i = 1; i <= n; i++) {  // 跑左集合
        memset(vis, 0, sizeof(vis));
        if (dfs(i))
            ans++;
    }
}

double dis(double x1, double y1, double x2, double y2) { return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2); }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    double s, v, x1[105], x2[105], y1[105], y2[105];
    while (cin >> a >> b >> s >> v) {
        n = a, p = b;
        s *= v;
        for (int i = 0; i < MXN; i++)
            g[i].clear();

        for (int i = 1; i <= a; i++)
            cin >> x1[i] >> y1[i];

        for (int i = 1; i <= b; i++)
            cin >> x2[i] >> y2[i];

        for (int i = 1; i <= a; i++) {
            for (int j = 1; j <= b; j++) {
                if (dis(x1[i], y1[i], x2[j], y2[j]) <= s * s + eps)
                    g[i].push_back(j);
            }
        }

        solve();
        cout << n - ans << '\n';
    }

    return 0;
}
