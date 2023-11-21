#include <bits/stdc++.h>
using namespace std;
map<char, char> mp;
string s[4] = {"`1234567890-=", "qwertyuiop[]\\", "asdfghjkl;'", "zxcvbnm,./"};
void init() {
    for (int i = 0; i < 4; i++) {
        for (int j = 2; j < s[i].length(); j++)  // 題目有保證不會出現前兩個
            mp[s[i][j]] = s[i][j - 2];
    }
    mp[' '] = ' ';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    init();
    string str;
    while (getline(cin, str)) {
        int len = str.length();
        for (int i = 0; i < len; i++)
            cout << mp[str[i]] << (i == len - 1 ? "\n" : "");
    }
    return 0;
}
