#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& i : arr)
        cin >> i;
    sort(arr.begin(), arr.end(), [](int a, int b) { return abs(a) < abs(b); });
    int ans = 0;
    for (int i = 0; i + 1 < n; i++) {
        if ((arr[i] > 0 && arr[i + 1] < 0) || (arr[i + 1] > 0 && arr[i] < 0))
            ans++;
    }

    cout << ans + 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
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