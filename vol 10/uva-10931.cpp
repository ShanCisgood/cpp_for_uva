#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n && n) {
        int cnt = 0;
        string s;
        while (n) {
            s.push_back((n & 1) + '0');
            cnt += (n & 1);
            n >>= 1;
        }
        reverse(s.begin(), s.end());
        cout << "The parity of " << s << " is " << cnt << " (mod 2).\n";
    }

    return 0;
}
