#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    while (cin >> n && n) {
        ll k = sqrt(n);
        if (k * k == n)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}
