#include <bits/stdc++.h>
#define ll long long
int arr[1000000], x;
using namespace std;
int main() {
    while (cin >> x) {
        int n, exp = 1;
        ll ans = 0;
        for (n = 0;; n++) {
            scanf("%d", &arr[n]);
            if (getchar() == '\n')
                break;
        }
        for (int i = n - 1; i >= 0; i--) {
            ans += arr[i] * exp * (n - i);
            exp *= x;
        }
        printf("%d\n", ans);  // 用 cout 會錯，不知道為什麼
    }
    return 0;
}
