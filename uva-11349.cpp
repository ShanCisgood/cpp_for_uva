#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100005;
long long arr[MAXN];
int n;
void input_matrix() {
    char c;
    cin >> c >> c >> n;
    for (int i = 0; i < n * n; i++)
        cin >> arr[i];
}
bool check_sym() {
    bool flag = true;
    for (int i = 0; i < n * n / 2 + 1; i++) {
        if (arr[i] != arr[n * n - 1 - i] || arr[i] < 0 || arr[n * n - 1 - i] < 0) {
            flag = false;
            break;
        }
    }
    return flag;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int test;
    cin >> test;
    for (int i = 1; i <= test; i++) {
        input_matrix();
        bool key = check_sym();
        cout << "Test #" << i << ": " << (key ? "Symmetric" : "Non-symmetric") << ".\n";
    }

    return 0;
}
