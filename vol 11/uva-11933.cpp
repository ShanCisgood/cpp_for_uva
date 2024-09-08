#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll ans[2];
void func(ll n) {
    ll ret = 0;
    ans[0] = ans[1] = 0;
    for (int i = 0, cnt = 0; n; i++, n >>= 1) {
        if (n & 1)
            ans[++cnt & 1] += (1 << i);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll a;
    while (cin >> a && a) {
        func(a);
        cout << ans[1] << ' ' << ans[0] << '\n';
    }

    return 0;
}
