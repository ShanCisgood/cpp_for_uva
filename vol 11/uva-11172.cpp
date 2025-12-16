#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        if (a < b)
            cout << "<\n";
        else if (a > b)
            cout << ">\n";
        else
            cout << "=\n";
    }

    return 0;
}
