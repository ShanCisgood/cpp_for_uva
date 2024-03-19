#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long s, d;
    while (cin >> s >> d) {
        do {
            d -= s++;
        } while (d > 0);
        cout << s - 1 << '\n';
    }
    return 0;
}
