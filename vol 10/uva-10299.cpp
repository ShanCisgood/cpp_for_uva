#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll Euler(ll n) {
    if (n < 2)
        return 0;
    ll now = n;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0) {
            now = now - now / i;
            while (n % i == 0)
                n = n / i;
        }
    if (n > 1)
        now = now - now / n;
    return now;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t, n;
    while (cin >> n && n)
        cout << Euler(n) << '\n';

    return 0;
}
