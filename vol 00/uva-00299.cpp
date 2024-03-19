#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--) {
        int n, arr[55], cnt = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] > arr[j]) {
                    swap(arr[i], arr[j]);
                    cnt++;
                }
            }
        }
        cout << "Optimal train swapping takes " << cnt << " swaps.\n";
    }

    return 0;
}
