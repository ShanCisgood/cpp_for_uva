#include <bits/stdc++.h>
#define ll long long
#define pii pair<ll, ll>
using namespace std;

ll fpow(ll a, ll b, ll m) {
    ll ret = 1;
    while (b) {
        if (b & 1)
            ret = ret * a % m;
        b >>= 1;
        a = a * a % m;
    }
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll b, p, m;
    while (cin >> b >> p >> m)
        cout << fpow(b, p, m) << '\n';

    return 0;
}
