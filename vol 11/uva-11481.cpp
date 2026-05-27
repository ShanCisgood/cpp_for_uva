#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MXN = 1e3 + 5;
const ll MOD = 1e9 + 7;

ll fac[MXN], inv[MXN];

ll comb(ll n, ll m) { return fac[n] * inv[m] % MOD * inv[n - m] % MOD; }

ll fpow(ll a, ll b) {
    ll ret = 1;
    while (b) {
        if (b & 1)
            ret = ret * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    fac[0] = 1;
    for (ll i = 1; i < MXN; i++)
        fac[i] = fac[i - 1] * i % MOD;
    inv[MXN - 1] = fpow(fac[MXN - 1], MOD - 2);
    for (ll i = MXN - 2; i >= 0; i--)
        inv[i] = inv[i + 1] * (i + 1) % MOD;

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> dp(m - k + 1, 0);
        dp[0] = fac[n - m];
        dp[1] = dp[0] * (n - m) % MOD;

        for (ll j = 2; j <= m - k; j++)
            dp[j] = (((j - 1) * ((dp[j - 1] + dp[j - 2]) % MOD) % MOD) + ((n - m) * dp[j - 1] % MOD)) % MOD;
        cout << "Case " << i << ": " << comb(m, k) * dp[m - k] % MOD << '\n';
    }

    return 0;
}

/**
 *
 *
 *
 *                            iiiiii         iiiiiiiiii       iiiiiiiiiiiiii
 *                       iiiiiiiiiiiii   iiiiiii    iiii    iiiiiiiiiiiiiii                          ii   iiii
 *                    iiiiiiii     iiiiiiiii         iiii       iiii iii              iii          iiiiiiiiii
 *                 iiiiiii          iiiiii           iiii    iiii   ii           iiiiiiiiii      iiii iiii
 *               iiiiii            iiiii             iiii iiii        iii      iiii    iiiiiiiiiiiiiiiii  ii
 *             iiiiii            iiiiiii            iiiiiii       iiiiiiii   iii    iiiiiiiiiiiiii iii  iiii
 *           iiiiii             iiiiiii            iiiii   ii   iiii       iiiiiiiiiii iiii  iii iiii iiii      iii
 *          iiiii              iiiiiiii       ii        iiiii iiii    iiiiiiiii        iii iii  iii  iii  ii  iiii
 *        iiiiii              iiiiiiii      iiiii     iiiii iiiiiiiiiiiiiiii         iii  iii  ii  iii  iii iiii
 *       iiiii                 iiiiii     iiii     iiiiii iiiiiii    iii iii       iiii  ii   r   ii  iii  iii
 *     iiiiii                            iiii  iiiiiiiiiiiiiii       iii iiii   iiiii  iii  ii  iii  iii  ii
 *    iiiii                              iiiiiiii iiiiiiiiii       iiii   iiiiiiiii            ii  iii  ii
 *   iiiii                                     iiiiii  iiii      iiiii              iii      ii   ii  r
 * iiiiii                                  iiiiiiii   iiiii    iiiii                        ii  ii   ii
 * iiiii                                iiii  iiii    iiiiiiiiiiii                             ii
 *  iii                              iiii   iiii       iiiiiiii
 *                                iiiii   iiii
 *                              iiii     iiii
 *                            iiii    iiiii
 *                          iii     iiiii
 *                        iii     iiiii
 *                       iii   iiiiii
 *                       iiiiiiiii
 *                       iiiiii
 *
 *
 *
 **/

// 這次肯定也是 WA
