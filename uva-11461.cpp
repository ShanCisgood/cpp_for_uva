#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, b;
    while (cin >> a >> b && a + b > 0) {
        int r1 = sqrt(a), r2 = sqrt(b);
        cout << int(r2 - r1 + 1 - (r1 * r1 != a)) << '\n';
    }

    return 0;
}
