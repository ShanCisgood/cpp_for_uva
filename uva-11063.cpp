#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, test = 0;
    while (cin >> n) {
        int arr[105], cnt[20005] = {0};
        bool is_B2 = true;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] < 1 || (i != 0 && arr[i - 1] >= arr[i]))
                is_B2 = false;
        }

        for (int i = 0; i < n && is_B2; i++) {
            for (int j = i; j < n && is_B2; j++) {
                int tmp = arr[i] + arr[j];
                if (cnt[tmp])
                    is_B2 = false;
                cnt[tmp]++;
            }
        }

        cout << "Case #" << ++test << ": It is " << (is_B2 ? "a" : "not a") << " B2-Sequence.\n\n";
    }
    return 0;
}
