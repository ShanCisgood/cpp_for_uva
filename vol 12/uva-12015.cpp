#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, string>
using namespace std;

bool cmp(pii a, pii b) { return a.first > b.first; }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    int t, n, c = 1;
    cin >> t;

    while (t--) {
        vector<pii> vec;
        for (int i = 0; i < 10; i++) {
            cin >> s >> n;
            vec.push_back({n, s});
        }
        sort(vec.begin(), vec.end(), cmp);
        int mx = vec[0].first;
        cout << "Case #" << c++ << ":\n";
        for (int i = 0; i < 10; i++) {
            if (vec[i].first == mx)
                cout << vec[i].second << '\n';
        }
    }

    return 0;
}
