#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        ll n, m;
        cin >> n >> m;

        if (n > m)
            cout << m << '\n';
        else {
            for (int i = n - 1; i >= 0; i--) {   // i: 窮舉的邊數
                ll a = n - i;                    // a: 窮舉的完全圖的城市數
                if (a * (a - 1) / 2 >= m - i) {  // m - i: 連完完全圖後剩下的邊
                    cout << i << '\n';
                    break;
                }
            }
        }
    }

    return 0;
}
