#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n) {
        int tmp, pre, arr[n];
        bool flag = true;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            if (i)
                arr[i] = abs(tmp - pre);
            pre = tmp;
        }
        sort(arr + 1, arr + n);
        for (int i = 1; i < n; i++) {
            if (i != arr[i]) {
                flag = false;
                break;
            }
        }
        cout << (flag ? "Jolly\n" : "Not jolly\n");
    }

    return 0;
}
