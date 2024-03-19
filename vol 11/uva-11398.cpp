#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int bi_num = 0, flag = 0;
    while (cin >> s && s != "~") {
        if (s == "#") {
            cout << bi_num << '\n';
            bi_num = flag = 0;
        }
        int len = s.length();
        if (len == 1)
            flag = 1;
        else if (len == 2)
            flag = 0;
        else {
            for (int i = 0; i < len - 2; i++)
                bi_num = (bi_num << 1) | flag;
        }
    }

    return 0;
}
