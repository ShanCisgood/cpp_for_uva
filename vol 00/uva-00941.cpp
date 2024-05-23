#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fac[25];

void init() {
    fac[0] = fac[1] = 1;
    for (int i = 2; i <= 20; i++)
        fac[i] = fac[i - 1] * i;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    init();
    int t, idx, len;
    string s;
    ll n;

    cin >> t;
    while (t--) {
        cin >> s >> n;
        sort(s.begin(), s.end());
        len = s.length();
        string ans;

        for (int i = len - 1; i >= 0; i--) {
            idx = n / fac[i];
            n %= fac[i];
            ans.push_back(s[idx]);
            s.erase(s.begin() + idx);
        }
        reverse(s.begin(), s.end());

        cout << ans << '\n';
    }

    return 0;
}
