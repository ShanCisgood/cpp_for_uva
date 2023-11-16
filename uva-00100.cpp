#include <bits/stdc++.h>
#define LL long long
using namespace std;
int func(LL n) {}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    while (cin >> a >> b) {
        for (LL i = a; i <= b; i++) {
            cout << a << ' ' << b << ' ' << func(i) << '\n';
        }
    }

    return 0;
}
