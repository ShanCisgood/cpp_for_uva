#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
void solve() {
    vector<ll> arr(n);
    for (ll& i : arr)
        cin >> i;
    sort(arr.begin(), arr.end());
    ll mid1 = arr[(n - 1) / 2], mid2 = arr[n / 2];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == mid1 || arr[i] == mid2)
            ans++;
    }
    cout << mid1 << " " << ans << " " << mid2 - mid1 + 1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while (cin >> n) {
        solve();
    }

    return 0;
}
