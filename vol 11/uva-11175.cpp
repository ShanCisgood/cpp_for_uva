#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> g(n + 1, vector<bool>(n + 1, false));
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u][v] = true;
    }
    for (int u = 0; u < n; u++) {
        for (int v = 0; v < n; v++) {
            bool check1 = false, check2 = false;
            for (int k = 0; k < n; k++) {
                if (g[u][k] && g[v][k])
                    check1 = true;
                if (g[u][k] != g[v][k])
                    check2 = true;
            }
            if (check1 && check2) {
                cout << "No";
                return;
            }
        }
    }
    cout << "Yes";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case #" << i << ": ";
        solve();
        cout << "\n";
    }

    return 0;
}
