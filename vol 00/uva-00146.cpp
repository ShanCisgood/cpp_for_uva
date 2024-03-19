#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    while (cin >> s && s != "#")
        if (next_permutation(s.begin(), s.end()))
            cout << s << '\n';
        else
            cout << "No Successor\n";

    return 0;
}
// 我也不知道為什麼會對
