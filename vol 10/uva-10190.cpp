#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int top, arr[32], m;
    while (cin >> arr[0] >> m) {
        if (arr[0] <= 1 || m <= 1) {
            cout << "Boring!\n";
            continue;
        }
        top = 0;
        while (!(arr[top] % m)) {
            arr[top + 1] = arr[top] / m;
            top++;
        }
        if (arr[top] == 1) {
            for (int i = 0; i <= top; i++)
                cout << arr[i] << " \n"[i == top];
        }
        else
            cout << "Boring!\n";
    }
    return 0;
}
