#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;
void solve() {
    for (ll i = 1; i <= 100; i++) {
        for (ll j = 1; j <= 100; j++) {
            if (n + j * j * j == i * i * i) {
                cout << i << ' ' << j << '\n';
                return;
            }
        }
    }
    cout << "No solution\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while (cin >> n && n)
        solve();

    return 0;
}
