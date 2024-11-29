#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t, n, cas = 0;
    cin >> t;
    while (t--) {
        cin >> n;
        n = n * (n - 1) >> 1;
        if (n & 1)
            cout << "Case " << ++cas << ": " << n << "/2\n";
        else
            cout << "Case " << ++cas << ": " << (n >> 1) << '\n';
    }

    return 0;
}
