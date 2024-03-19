#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n) {
        int cnt = n;
        while (!(n < 3)) {
            cnt += n / 3;
            n = n / 3 + n % 3;
        }
        cout << cnt + (n == 2) << "\n";
    }

    return 0;
}
