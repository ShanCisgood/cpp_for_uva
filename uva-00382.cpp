#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cout << "PERFECTION OUTPUT\n";
    while (cin >> n && n) {
        int s = 1;
        if (n == 1) {
            cout << setw(5) << 1 << "  DEFICIENT\n";
            continue;
        }
        for (int i = 2; i <= sqrt(n); i++) {
            s += (i + n / i) * (n % i == 0);
        }
        if (s == n)
            cout << setw(5) << n << "  PERFECT\n";
        else if (s < n)
            cout << setw(5) << n << "  DEFICIENT\n";
        else
            cout << setw(5) << n << "  ABUNDANT\n";
    }
    cout << "END OF OUTPUT\n";

    return 0;
}
