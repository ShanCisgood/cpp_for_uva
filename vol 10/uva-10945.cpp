#include <bits/stdc++.h>
using namespace std;

void convert(string &s) {
    int len = s.length();
    string tmp;
    for (int i = 0; i < len; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            tmp.push_back(s[i]);
    }
    len = tmp.length();
    for (int i = 0; i < len; i++) {
        if (tmp[i] >= 'a' && tmp[i] <= 'z')
            tmp[i] = tmp[i] - 'a' + 'A';
    }
    s = tmp;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s, ans[2] = {"Uh oh..\n", "You won't be eaten!\n"};
    while (getline(cin, s)) {
        if (s == "DONE")
            break;
        convert(s);
        bool is_pil = true;
        int len = s.length();
        for (int i = 0; i < len / 2; i++) {
            if (s[i] != s[len - 1 - i]) {
                is_pil = false;
                break;
            }
        }
        cout << ans[is_pil];
    }

    return 0;
}
