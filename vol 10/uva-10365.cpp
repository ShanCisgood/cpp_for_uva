#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = 1e3;

map<ll, ll> mp;

void solve() {
    ll n;
    cin >> n;
    cout << mp[n] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (ll i = 1; i <= N; i++) {
        for (ll j = 1; i * j <= N; j++) {
            for (ll k = 1; i * j * k <= N; k++) {
                if (mp.count(i * j * k))
                    mp[i * j * k] = min(mp[i * j * k], 2 * (i * j + j * k + i * k));
                else
                    mp[i * j * k] = 2 * (i * j + j * k + i * k);
            }
        }
    }
    while (t--)
        solve();

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
