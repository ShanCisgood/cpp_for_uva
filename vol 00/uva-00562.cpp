#include <bits/stdc++.h>
using namespace std;

const int MAXN = 105, N = 500 * 500 + 5;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    while (cin >> t) {
        while (t--) {
            int dp[N] = {0}, arr[MAXN], n, total = 0;
            cin >> n;
            for (int i = 0; i < n; i++)
                cin >> arr[i], total += arr[i];

            int half = total >> 1;
            sort(arr, arr + n);

            for (int i = 0; i < n; i++) {
                for (int j = half; j - arr[i] >= 0; j--) {
                    dp[j] = max(dp[j], dp[j - arr[i]] + arr[i]);
                }
            }
            cout << total - dp[half] * 2 << "\n";
        }
    }

    return 0;
}