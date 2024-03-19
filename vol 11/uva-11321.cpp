#include <bits/stdc++.h>
using namespace std;
int n, m, arr[10005];
bool cmp(int a, int b) {
    if (a % m == b % m) {
        if ((a & 1) != (b & 1))
            return (a & 1) > (b & 1);
        else if ((a & 1) && (b & 1))
            return a > b;
        else if (!(a & 1) && !(b & 1))
            return a < b;
    }
    return a % m < b % m;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while (cin >> n >> m) {
        cout << n << " " << m << "\n";
        if (!n && !m)
            break;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n, cmp);
        for (int i = 0; i < n; i++)
            cout << arr[i] << "\n";
    }

    return 0;
}
