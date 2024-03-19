#include <bits/stdc++.h>
using namespace std;
const double pi = 2 * acos(0);
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    double r, a;
    string unit;
    while (cin >> r >> a >> unit) {
        if (unit == "min")
            a /= 60;
        if (a > 180.0)
            a = 360.0 - a;
        a *= pi / 180;
        r += 6440;
        cout << fixed << setprecision(6) << a * r << ' ';
        cout << fixed << setprecision(6) << sqrt(2 * r * r * (1 - cos(a))) << '\n';
    }
    return 0;
}
