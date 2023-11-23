#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    while (getline(cin, s)) {
        int sum = 0, mx = 1, tmp;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= '0' && s[i] <= '9')
                tmp = s[i] - '0';
            else if (s[i] >= 'A' && s[i] <= 'Z')
                tmp = s[i] - 'A' + 10;
            else if (s[i] >= 'a' && s[i] <= 'z')
                tmp = s[i] - 'a' + 36;
            else
                continue;
            mx = max(mx, tmp);
            sum += tmp;
        }
        int i;
        for (i = mx; i < 62; i++)
            if (!(sum % i)) {
                cout << i + 1 << '\n';
                break;
            }
        if (i == 62)
            cout << "such number is impossible!\n";
    }

    return 0;
}
