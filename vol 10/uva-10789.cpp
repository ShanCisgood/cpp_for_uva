#include <bits/stdc++.h>
using namespace std;

#define ll long long
/**
 * @brief Miller-Rabin test for prime test
 * 判斷質數 O(klog^3(n))
 *
 * 用法:
 * 1. 挑選一處 magic 並填入陣列大小S
 * 2. 呼叫miller_rabin(n)
 * 結果: 回傳 n 是否為質數
 * 備註:
 * 1. 要確定要判斷的整數 n 是介於 [2, n - 2]
 * 2. 測試數列 magic 如下:
 *    n < 4,759,123,141, s = 3: {2, 7, 61}
 *    n < 1,122,004,669,633, s = 4: {2, 13, 23, 1662803}
 *    n < 3,474,749,660,383, s = 6: {2, 3, 5, 7, 13}
 *    n < 2^64,
 *    s = 7: {2, 325, 9375, 28178, 450775, 9780504, 1795265022}
 *
 */

/**
 * @brief 快速冪取模
 * 計算 x 的 y 次方對 mod 取模之值
 *
 * @param x 底數
 * @param y 指數
 * @param mod 求模的那個東東
 * @return ll x 的 y 次方之值
 */
ll power(ll x, ll y, ll m) {
    ll ret = 1;
    while (y) {
        if (y & 1)
            (ret *= x) %= m;
        (x *= x) %= m;
        y >>= 1;
    }
    return ret;
}

ll mul(ll x, ll y, ll mod) {
    ll ret = x * y - (ll)((long double)x / mod * y) * mod;
    return ret < 0 ? ret + mod : ret;
    // return x * y % mod;  //// 如果數字大到需要開__int128就用這
}

ll magic[3] = {2, 7, 61};  // 這邊填入要用於測試的數列
ll S = 3;                  // 測試的數列數字的數量
bool witness(ll a, ll n, ll u, int t) {
    if (!a)
        return 0;
    ll x = power(a, u, n);
    for (int i = 0; i < t; i++) {
        ll nx = mul(x, x, n);
        if (nx == 1 && x != 1 && x != n - 1)
            return 1;
        x = nx;
    }
    return x != 1;
}
bool miller_rabin(ll n) {
    int s = S;  // magic number size
    // iterate s times of witness on n
    if (n < 2)
        return false;
    if (!(n & 1))
        return (n == 2);

    // 將 n - 1 寫成 u * (2 ^ t) 的形式
    ll u = n - 1;
    int t = 0;
    while (!(u & 1))
        u >>= 1, t++;

    while (s--) {
        ll a = magic[s] % n;
        if (witness(a, n, u, t))
            return false;
    }
    return true;
}

map<char, ll> mp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    string s;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        mp.clear();
        cin >> s;
        for (int j = 0; j < s.length(); j++)
            mp[s[j]]++;
        sort(s.begin(), s.end());

        string ans;
        char pre = '*';
        for (int j = 0; j < s.length(); j++) {
            if (pre != s[j] && miller_rabin(mp[s[j]])) {
                ans.push_back(s[j]);
            }
            pre = s[j];
        }
        if (!ans.empty())
            cout << "Case " << i << ": " << ans << '\n';
        else
            cout << "Case " << i << ": empty\n";
    }

    return 0;
}
