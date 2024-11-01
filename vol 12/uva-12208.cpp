#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll cnt_ones(ll n) {
    ll ret = 0;
    n++;
    int i;
    for (i = 1; i <= 32 && n / (1 << i); i++) {
        ret += (n / (1 << i)) * (1 << (i - 1));
        if (n % (1 << i) > (1 << (i - 1)))
            ret += n % (1 << (i - 1));
    }
    ret += (n / (1 << i)) * (1 << (i - 1));
    if (n % (1 << i) > (1 << (i - 1)))
        ret += n % (1 << (i - 1));
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll a, b, c = 0;
    while (cin >> a >> b && !(a == 0 && b == 0))
        cout << "Case " << ++c << ": " << cnt_ones(b) - cnt_ones(a - 1) << '\n';

    return 0;
}
