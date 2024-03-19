#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // y = -ax + b, a = 1, b = 0, 1, 2, ...
    int n;
    while (cin >> n) {
        cout << "TERM " << n << " IS ";
        int b = 1;
        for (int i = 0; n - b > 0; i++, n -= b, b++) {}
        int x = n, y = b - x + 1;
        if (b & 1)
            swap(x, y);
        cout << x << '/' << y << '\n';
    }

    return 0;
}
