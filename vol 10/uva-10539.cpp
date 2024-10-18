#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

const ll N = 1e6 + 5;
bool is_prime[N];
vector<ll> prime, alp;

void init() {
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i < N; i++) {  // i <= sqrt(N)
        if (is_prime[i] == false)
            continue;
        for (ll j = i * i; j < N; j += i)
            is_prime[j] = false;
    }

    for (int i = 2; i < N; i++) {
        if (is_prime[i] == true)
            prime.push_back(i);  // 建質數表
    }

    int n = prime.size();
    for (int i = 0; i < n; i++) {
        ll p = prime[i];
        for (ll j = p * p; j < N * N; j *= p)
            alp.push_back(j);
    }

    sort(all(alp));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    init();
    int n;
    ll a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        vector<ll>::iterator low, high;
        low = lower_bound(all(alp), a);
        high = lower_bound(all(alp), b);

        // cout << alp.back() << '\n';
        // cout << *low << " " << *high << '\n';

        cout << high - low + (*high == b) << '\n';
    }

    return 0;
}
