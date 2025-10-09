#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MXN = 700;
ll arr[MXN];
int n;
ll k;

bool check(ll x) {
    ll s = 0, t = 0;
    for (int i = 1; i <= n + 1; i++) {
        if (arr[i] > x)
            return false;
        if (s + arr[i] <= x) {
            s += arr[i];
        }
        else {
            t++;
            s = arr[i];
        }
    }
    if (s <= x)
        t++;
    if (t > k + 1)
        return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while (cin >> n >> k) {
        ll total = 0;
        for (int i = 1; i <= n + 1; i++)
            cin >> arr[i], total += arr[i];

        ll l = 0, r = total + 1;
        while (l <= r) {
            ll mid = (l + r) / 2;
            if (check(mid))
                r = mid - 1;
            else
                l = mid + 1;
        }

        cout << l << '\n';
    }

    return 0;
}
