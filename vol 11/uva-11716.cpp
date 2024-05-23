#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    string s;
    cin >> t;
    getline(cin, s);

    while (t--) {
        getline(cin, s);
        int n = s.length(), k = sqrt(n);
        if (k * k != n) {
            cout << "INVALID\n";
            continue;
        }
        for (int i = 0; i < k; i++) {
            for (int j = i; j < n; j += k)
                cout << s[j];
        }
        cout << '\n';
    }

    return 0;
}
