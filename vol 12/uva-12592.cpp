#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    cin >> n;
    string s, t;
    getline(cin, s);
    map<string, string> mp;
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        getline(cin, t);
        mp[s] = t;
    }
    cin >> q;
    getline(cin, s);
    while (q--) {
        getline(cin, s);
        cout << mp[s] << '\n';
    }

    return 0;
}
