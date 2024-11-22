#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll x, tmp;
    while (cin >> x && x) {
        tmp = x * 10;
        if (tmp % 9 == 0)
            cout << tmp / 9 - 1 << ' ';
        cout << tmp / 9 << '\n';
    }

    return 0;
}
