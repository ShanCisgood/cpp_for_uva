#include <bits/stdc++.h>
#define pic pair<char, int>
using namespace std;
bool cmp(pic a, pic b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int n;
    vector<pic> v;
    for (int i = 0; i < 26; i++)
        v.push_back({'A' + i, 0});
    cin >> n;
    getline(cin, s);
    while (n--) {
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] -= 'a' - 'A';
            if (s[i] >= 'A' && s[i] <= 'Z')
                v[s[i] - 'A'].second++;
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (auto &i : v)
        if (i.second)
            cout << i.first << " " << i.second << '\n';

    return 0;
}
