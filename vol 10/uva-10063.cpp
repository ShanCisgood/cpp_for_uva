#include <bits/stdc++.h>
using namespace std;

string s;

void dfs(int idx, string cur) {
    if (cur.size() == s.length()) {
        cout << cur << '\n';
        return;
    }
    int sz = cur.size();
    for (int i = 0; i <= sz; i++) {
        cur.insert(i, {s[idx]});
        dfs(idx + 1, cur);
        cur.erase(i, 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    bool isTrue = false;
    while (cin >> s) {
        if (isTrue)
            cout << '\n';
        dfs(0, "");
        isTrue = true;
    }

    return 0;
}
