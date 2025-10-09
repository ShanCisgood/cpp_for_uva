#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll d;
string s;
int ans = 0;
int cnt[10];

void dfs(int dep, ll ret) {
    if (dep == s.length()) {
        ans += (ret % d == 0);
        return;
    }
    for (int i = 0; i < 10; i++) {
        if (cnt[i] == 0)
            continue;
        cnt[i]--;
        dfs(dep + 1, ret * 10 + i);
        cnt[i]++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ans = 0;
        cin >> s >> d;
        for (int i = 0; i < 10; i++)
            cnt[i] = 0;
        for (int i = 0; i < s.length(); i++)
            cnt[s[i] - '0']++;
        dfs(0, 0);
        cout << ans << '\n';
    }

    return 0;
}
