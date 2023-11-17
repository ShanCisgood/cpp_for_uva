#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // y = -x + b, b >= 0, b is an integer
    long long n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        long long sx, sy, dx, dy, b1, b2;
        cin >> sx >> sy >> dx >> dy;
        b1 = sx + sy;
        b2 = dx + dy;
        // because there are b steps within one slash
        // to calculate the answer
        // do the summation betwen [b1, b2], by the summation formula
        // and then subtract excess steps
        // finally, add the steps when b convert
        cout << "Case " << i << ": " << (b1 + b2) * (b2 - b1 + 1) / 2 - sx - dy + (b2 - b1) << "\n";
    }

    return 0;
}
