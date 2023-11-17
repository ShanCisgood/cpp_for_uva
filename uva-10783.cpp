#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a, b, cnt = 0;
        cin >> a >> b;
        for (int j = (a & 1 ? a : a + 1); j <= b; j += 2)
            cnt += j;
        cout << "Case " << i << ": " << cnt << "\n";
    }

    return 0;
}
