#include <bits/stdc++.h>
#define ll long long
using namespace std;

int mod;

struct matrix {
    ll mat[2][2];

    void init() {
        mat[0][0] = mat[0][1] = mat[1][0] = 1;
        mat[1][1] = 0;
    }

    matrix operator*(const matrix &b) const {
        matrix ans;
        ans.mat[0][0] = ans.mat[0][1] = ans.mat[1][0] = ans.mat[1][1] = 0;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                for (int k = 0; k < 2; k++)
                    ans.mat[i][j] = (ans.mat[i][j] + mat[i][k] * b.mat[k][j]) % mod;
        return ans;
    }
} mt;

ll fmatpow(ll n) {
    mt.init();
    matrix ans;
    ans.mat[0][0] = 1;
    ans.mat[1][0] = ans.mat[1][1] = ans.mat[0][1] = 0;
    while (n) {
        if (n & 1) {
            ans = mt * ans;
        }
        mt = mt * mt;
        n >>= 1;
    }
    return ans.mat[0][0];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, m;
    while (cin >> n >> m) {
        mod = 1 << m;
        if (!n)
            cout << "0\n";
        else
            cout << fmatpow(n - 1) << "\n";
    }

    return 0;
}
