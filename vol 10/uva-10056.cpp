#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int s;
    double n, p, k;
    cin >> s;
    while (s--) {
        cin >> n >> p >> k;
        if (!p)
            cout << "0.0000\n";
        else
            cout << fixed << setprecision(4) << pow(1.0 - p, k - 1) * p / (1.0 - pow(1.0 - p, n)) << "\n";
    }

    return 0;
}
