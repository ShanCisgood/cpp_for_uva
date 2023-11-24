#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--) {
        int e, f, c, emty = 0, ans = 0;
        cin >> e >> f >> c;
        emty = e + f;
        while (emty >= c) {
            ans += emty / c;
            emty = emty / c + emty % c;
        }
        cout << ans << '\n';
    }

    return 0;
}
