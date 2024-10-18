#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    while (cin >> n && n) {
        int cnt = 1 + (n != 1);
        for (ll i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                cnt++;
                if (n != i * i)
                    cnt++;
            }
        }
        cout << (cnt % 2 == 1 ? "yes" : "no") << '\n';
    }

    return 0;
}
