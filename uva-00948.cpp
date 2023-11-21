#include <bits/stdc++.h>
using namespace std;
// max = 63245986
int arr[50] = {1, 1}, n = 2;
void fib_init() {
    if (arr[n - 1] + arr[n - 2] > 63245986)
        return;
    arr[n] = arr[n - 1] + arr[n - 2];
    n++;
    fib_init();
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fib_init();

    int num, fib_num;
    cin >> num;
    while (num--) {
        string s;
        cin >> fib_num;
        cout << fib_num;
        for (int i = n - 1; i > 0; i--) {
            if (fib_num >= arr[i]) {
                s.push_back('1');
                fib_num -= arr[i];
            }
            else if (fib_num <= arr[i] && s.length() > 0)
                s.push_back('0');
        }
        cout << " = " << s << " (fib)\n";
    }

    return 0;
}
