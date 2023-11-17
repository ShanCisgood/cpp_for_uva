#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string notout[2] = {" not ", " "}, str;
    while (cin >> str && str != "0") {
        int cnt = 0;
        for (int i = 0; i < str.length(); i++)
            cnt += ((i & 1) * 2 - 1) * (str[i] - '0');
        cout << str << " is" << notout[!(abs(cnt) % 11)] << "a multiple of 11.\n";
    }
    return 0;
}
