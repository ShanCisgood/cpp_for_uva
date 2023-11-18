#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    while (cin >> a >> b && (a || b)) {
        int carry = 0, cnt = 0;
        while (a || b) {
            if (a % 10 + b % 10 + carry >= 10) {
                cnt++;
                carry = (a % 10 + b % 10 + carry) / 10;
            }
            else
                carry = 0;
            a /= 10;
            b /= 10;
        }
        if (!cnt)
            cout << "No carry operation.\n";
        else if (cnt == 1)
            cout << cnt << " carry operation.\n";
        else
            cout << cnt << " carry operations.\n";
    }

    return 0;
}
