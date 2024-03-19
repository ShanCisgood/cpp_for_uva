#include <bits/stdc++.h>
using namespace std;
int f(int n) {
    if (!(n / 10))
        return n;
    int cnt = 0;
    while (n) {
        cnt += n % 10;
        n /= 10;
    }
    return f(cnt);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n && n)
        cout << f(n) << "\n";

    return 0;
}
