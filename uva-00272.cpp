#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s, q[2] = {"``", "''"};
    int cnt = 0;
    while (getline(cin, s)) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '\"') {
                cout << q[cnt & 1];
                cnt++;
            }
            else
                cout << s[i];
        }
        cout << '\n';
    }

    return 0;
}
