#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, len;
    string s;
    while (cin >> n && n != 0) {
        cin >> s;
        len = s.length();
        for (int i = 0, k = 0; i < n; i++) {
            string tmp;
            for (int j = 0; j < len / n; j++, k++) {
                tmp.push_back(s[k]);
            }
            reverse(tmp.begin(), tmp.end());
            cout << tmp;
        }
        cout << '\n';
    }

    return 0;
}
