#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;

    while (cin >> n) {
        if (n < 0)
            break;
        cout << (n * (n + 1) + 2) / 2 << "\n";
    }

    return 0;
}
