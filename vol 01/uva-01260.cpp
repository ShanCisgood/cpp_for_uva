#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, arr[1005];
    cin >> t;
    while (t--) {
        int n, cnt = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 1; i < n; i++)
            for (int j = 0; j < i; j++)
                if (arr[j] <= arr[i])
                    cnt++;

        cout << cnt << '\n';
    }

    return 0;
}
