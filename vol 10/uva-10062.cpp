#include <bits/stdc++.h>
#define pci pair<char, int>
using namespace std;
bool cmp(pci a, pci b) {
    if (a.second == b.second)
        return a.first > b.first;
    return a.second < b.second;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    bool k = false;
    while (getline(cin, s)) {
        if (k)
            cout << '\n';
        k = true;
        map<char, int> mp;
        for (int i = 0; i < 128; i++)
            mp[i] = 0;
        for (int i = 0; i < s.length(); i++)
            mp[s[i]]++;
        vector<pci> v;
        for (int i = 0; i < 128; i++) {
            if (mp[i])
                v.push_back({i, mp[i]});
        }
        sort(v.begin(), v.end(), cmp);
        for (auto i : v) {
            int tmp = i.first;
            cout << tmp << ' ' << i.second << '\n';
        }
    }

    return 0;
}
