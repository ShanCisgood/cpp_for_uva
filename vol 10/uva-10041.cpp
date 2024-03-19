#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--) {
        int ans = 0, r, arr[505];
        cin >> r;
        for (int i = 0; i < r; i++)
            cin >> arr[i];
        sort(arr, arr + r);
        for (int i = 0; i < r; i++)
            ans += abs(arr[r / 2] - arr[i]);
        cout << ans << '\n';
    }
    return 0;
}
