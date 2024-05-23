#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, n;
    string s;
    cin >> t;

    for (int c = 1; c <= t; c++) {
        cin >> n >> s;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                ans++;
                i += 2;
            }
        }
        cout << "Case " << c << ": " << ans << '\n';
    }

    return 0;
}
