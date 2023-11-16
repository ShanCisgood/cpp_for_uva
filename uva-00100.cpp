#include <bits/stdc++.h>
using namespace std;
int func(int n) {
    int cnt = 1;
    while (n - 1) {
        n = (n & 1 ? 3 * n + 1 : (n >> 1));
        cnt++;
    }
    return cnt;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    while (cin >> a >> b) {
        int mx = 0;
        cout << a << ' ' << b << ' ';
        if (a > b)
            swap(a, b);
        for (int i = a; i <= b; i++)
            mx = max(mx, func(i));
        cout << mx << '\n';
    }

    return 0;
}
