#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> g[30];
vector<char> ans;
unordered_set<int> st;
bool deg[30];
bool vis[30];

void dfs(int u) {
    vis[u] = true;
    for (auto &i : g[u]) {
        if (!vis[i])
            dfs(i);
    }
    ans.push_back(u + 'A');
}

void topo() {
    for (auto &i : st)
        if (!deg[i])
            dfs(i);
    reverse(ans.begin(), ans.end());
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s1, s2;

    cin >> s1;
    while (cin >> s2 && s2 != "#") {
        for (int i = 0; i < s1.size() && i < s2.size(); i++) {
            st.insert(s1[i] - 'A'), st.insert(s2[i] - 'A');
            if (s1[i] != s2[i]) {
                g[s1[i] - 'A'].push_back(s2[i] - 'A');
                deg[s2[i] - 'A'] = true;
                break;
            }
        }
        s1 = s2;
    }

    topo();
    for (char &i : ans)
        cout << i;
    cout << '\n';

    return 0;
}
