#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<vector<ll>> dis(n, vector<ll>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> dis[i][j];
    }
    vector<int> order(n);
    for (int &i : order)
        cin >> i;

    ll ans = 0;
    vector<int> tmp;
    for (int k = 0; k < n; k++) {
        int x = order[n - k - 1];
        tmp.push_back(x);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j)
                    continue;
                if (dis[i][j] > dis[i][x] + dis[x][j])
                    dis[i][j] = dis[i][x] + dis[x][j];
            }
        }
        for (int i = 0; i < tmp.size(); i++) {
            for (int j = 0; j < tmp.size(); j++) {
                if (i == j)
                    continue;
                ans += dis[tmp[i]][tmp[j]];
            }
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
