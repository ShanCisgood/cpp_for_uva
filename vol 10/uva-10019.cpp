#include <bits/stdc++.h>
using namespace std;
int binary_digit(int n) {
    int cnt = 0;
    while (n) {
        cnt += (n & 1);
        n >>= 1;
    }
    return cnt;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, org;
    cin >> n;
    while (n--) {
        int b1, b2, n1, n2 = 0, k = 1;
        cin >> org;
        n1 = org;
        b1 = binary_digit(n1);
        while (n1) {
            n2 += (n1 % 10) * k;
            k *= 16;
            n1 /= 10;
        }
        b2 = binary_digit(n2);
        cout << b1 << " " << b2 << "\n";
    }
    return 0;
}
