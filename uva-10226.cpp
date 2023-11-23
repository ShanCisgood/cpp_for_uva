#include <bits/stdc++.h>
#define y second
#define x first
using namespace std;
int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    int n;
    string s;
    cin >> n;
    getline(cin, s);
    getline(cin, s);
    bool key = false;
    while (n--) {
        if (key)
            cout << '\n';
        key = true;
        int cnt = 0;
        map<string, int> mp;
        while (getline(cin, s) && s != "") {
            // cout << "<<<<<<" << s << '\n';
            mp[s]++;
            cnt++;
        }
        for (auto i : mp) {
            double tmp = i.y;
            cout << i.x << ' ' << fixed << setprecision(4) << tmp / cnt * 100 << '\n';
        }
    }

    return 0;
}
