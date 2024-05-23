#include <bits/stdc++.h>
using namespace std;

vector<int> tmp;
vector<vector<int>> ans;

void dfs(int n, int d) {
    for (int i = d; i * i <= n; i++) {
        if (n % i)
            continue;
        tmp.push_back(i);
        dfs(n / i, i);
        tmp.pop_back();
    }
    tmp.push_back(n);
    ans.push_back(tmp);
    tmp.pop_back();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;

    while (cin >> n && n) {
        tmp.clear();
        ans.clear();
        dfs(n, 2);
        ans.pop_back();
        cout << ans.size() << '\n';
        for (int i = 0; i < ans.size(); i++) {
            for (int j = 0; j < ans[i].size(); j++)
                cout << ans[i][j] << " \n"[j == ans[i].size() - 1];
        }
    }

    return 0;
}
