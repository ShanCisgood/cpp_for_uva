#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    ll n, total = 0;
    string s;
    while (cin >> t) {
        while (t--) {
            cin >> s;
            if (s[0] == 'd')
                cin >> n, total += n;
            else
                cout << total << '\n';
        }
    }

    return 0;
}
