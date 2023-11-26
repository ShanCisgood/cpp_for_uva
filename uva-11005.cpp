#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int test;
    cin >> test;
    for (int cas = 1; cas <= test; cas++) {
        if (cas - 1)
            cout << '\n';
        cout << "Case " << cas << ":\n";
        int num, n, mp[36], ans[37];
        for (int i = 0; i < 36; i++)
            cin >> mp[i];
        cin >> n;
        while (n--) {
            cin >> num;
            int mn = INT_MAX;
            for (int i = 2; i <= 36; i++) {
                int cost = 0, tmp = num;
                while (tmp) {
                    cost += mp[tmp % i];
                    tmp /= i;
                }
                ans[i] = cost;
                mn = min(mn, cost);
            }
            cout << "Cheapest base(s) for number " << num << ":";
            for (int i = 2; i <= 36; i++) {
                if (ans[i] == mn)
                    cout << " " << i;
            }
            cout << "\n";
        }
    }

    return 0;
}
