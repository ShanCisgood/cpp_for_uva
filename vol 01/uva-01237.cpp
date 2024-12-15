#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

void solve() {
    int n, q;
    map<pii, string> mp;
    vector<pii> vec;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        int l, r;
        cin >> s >> l >> r;
        vec.push_back({l, r});
        mp[{l, r}] = s;
    }

    cin >> q;
    while (q--) {
        int money, cnt = 0;
        cin >> money;
        string ans;
        for (auto it : vec) {
            if (money >= it.first && money <= it.second)
                cnt++, ans = mp[it];
            if (cnt > 1) {
                cout << "UNDETERMINED\n";
                break;
            }
        }
        if (cnt == 1)
            cout << ans << '\n';
        else if (cnt == 0)
            cout << "UNDETERMINED\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
        if (t)
            cout << '\n';
    }

    return 0;
}
