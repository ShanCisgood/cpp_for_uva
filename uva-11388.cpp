#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, g, l;
    cin >> t;

    while (t--) {
        cin >> g >> l;
        if (l % g)
            cout << "-1\n";
        else
            cout << g << ' ' << l << '\n';
    }

    return 0;
}
