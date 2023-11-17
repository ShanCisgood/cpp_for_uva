#include <bits/stdc++.h>
#define LL long long
using namespace std;
int rec(string s, int cnt) {
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
        ans += s[i] - '0';
    cnt++;
    if (ans < 9)
        return 0;
    else if (ans == 9)
        return cnt;
    return rec(to_string(ans), cnt);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    while (cin >> s && s != "0") {
        if (rec(s, 0) == 0)
            cout << s << " is not a multiple of 9.\n";
        else
            cout << s << " is a multiple of 9 and has 9-degree " << rec(s, 0) << ".\n";
    }

    return 0;
}
