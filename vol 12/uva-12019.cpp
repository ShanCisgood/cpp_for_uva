#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int test, arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string s[8] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cin >> test;
    while (test--) {
        int m, d, cnt = 0;
        cin >> m >> d;
        for (int i = 1; i < m; i++)
            cnt += arr[i];
        cnt += d + 4;
        cout << s[cnt % 7] << '\n';
    }

    return 0;
}
