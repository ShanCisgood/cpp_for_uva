#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        ll n, p;
        cin >> n;
        p = n;
        set<ll> st;
        bool ans = true;
        while (n > 1) {
            ll tmp = n, s = 0;
            while (tmp) {
                s += (tmp % 10) * (tmp % 10);
                tmp /= 10;
            }

            if (st.count(s)) {
                ans = false;
                break;
            }
            st.insert(s);
            n = s;
        }
        if (ans)
            cout << "Case #" << i << ": " << p << " is a Happy number.\n";
        else
            cout << "Case #" << i << ": " << p << " is an Unhappy number.\n";
    }

    return 0;
}
