#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b) {
    while ((a %= b) && (b %= a)) {}
    return a + b;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    int n;
    cin >> n;
    getline(cin, s);
    while (n--) {
        getline(cin, s);
        stringstream ss;
        ss << s;
        vector<ll> v;
        ll mx = -1, tmp;
        while (ss >> tmp)
            v.push_back(tmp);
        for (int i = 0; i < v.size() - 1; i++)
            for (int j = i + 1; j < v.size(); j++)
                mx = max(mx, gcd(v[i], v[j]));
        cout << mx << '\n';
    }

    return 0;
}
