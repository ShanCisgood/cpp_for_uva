#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, t, tmp, r;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        string s;
        cin >> n;
        while (n) {
            r = n % (-2);
            tmp = n / (-2);
            if (r < 0)
                r += 2, tmp++;
            n = tmp;
            s.push_back('0' + r);
        }
        reverse(s.begin(), s.end());
        if (s.empty())
            cout << "Case #" << i << ": 0\n";
        else
            cout << "Case #" << i << ": " << s << '\n';
    }

    return 0;
}
