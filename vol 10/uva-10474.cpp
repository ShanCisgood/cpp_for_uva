#include <bits/stdc++.h>
using namespace std;
const int maxn = 10005;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, q, arr[maxn], testcase = 1;
    while (cin >> n >> q && n && q) {
        cout << "CASE# " << testcase++ << ":\n";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        while (q--) {
            int tmp;
            cin >> tmp;
            int idx = lower_bound(arr, arr + n, tmp) - arr;
            if (arr[idx] == tmp)
                cout << tmp << " found at " << idx + 1 << endl;
            else
                cout << tmp << " not found\n";
        }
    }

    return 0;
}
