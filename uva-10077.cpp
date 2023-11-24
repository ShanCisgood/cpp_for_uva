#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b) {
    while ((a %= b) && (b %= a)) {}
    return a + b;
}
struct fraction {
    int m, n;
};
fraction operator+(fraction a, fraction b) {
    struct fraction p;
    p.m = a.m + b.m;
    p.n = a.n + b.n;
    int d = gcd(p.m, p.n);
    p.m /= d;
    p.n /= d;
    return p;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    bool key = false;
    struct fraction l, r, now, ans;
    while (cin >> ans.m >> ans.n) {
        if (key)
            cout << '\n';
        key = true;
        l.m = 0, l.n = 1;
        r.m = 1, r.n = 0;
        now.m = 1, now.n = 1;
        ll d = gcd(ans.m, ans.n);
        ans.m /= d, ans.n /= d;
        while (!(ans.m == now.m && ans.n == now.n)) {
            double a1 = ans.m, a2 = ans.n, b1 = now.m, b2 = now.n;
            if (a1 / a2 < b1 / b2) {
                r = now;
                now = now + l;
                cout << 'L';
            }
            else {
                l = now;
                now = now + r;
                cout << 'R';
            }
        }
    }

    return 0;
}
