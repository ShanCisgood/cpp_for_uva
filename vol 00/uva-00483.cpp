#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    while (getline(cin, s)) {
        stringstream ss;
        ss << s;
        bool is_true2 = false;
        while (ss >> s) {
            if (is_true2)
                cout << ' ';
            is_true2 = true;
            reverse(s.begin(), s.end());
            cout << s;
        }
        cout << '\n';  // 換行好討厭
    }

    return 0;
}
