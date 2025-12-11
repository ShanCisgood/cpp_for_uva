#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = INT_MAX;
// 值 -> 最大次方
unordered_map<ll, ll> mp;

void build_table() {
    for (ll b = 2; b * b <= N; b++) {
        ll val = b * b, p = 2;

        while (val <= N) {
            mp[val] = max(mp[val], p);
            if (N < val * b)
                break;
            val *= b;
            p++;
        }
    }
}

void solve(ll n) {
    if (n == 0)
        return;
    if (n == -2147483648) {
        cout << "31\n";
        return;
    }

    bool is_negative = (n < 0);
    ll target = abs(n);

    if (mp.count(target)) {
        ll p = mp[target];

        if (is_negative) {
            while (p % 2 == 0)
                p /= 2;
        }
        cout << p << '\n';
    }
    else
        cout << "1\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    build_table();

    ll n;
    while (cin >> n && n)
        solve(n);

    return 0;
}
