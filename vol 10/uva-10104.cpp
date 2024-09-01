#include <bits/stdc++.h>
using namespace std;

/**
 * @brief EXGCD 拓展歐基里德法
 * 除了求出最大公因數之外 還幫你找到 ax + by = gcd(a, b) 的一組整數解
 *
 * @param a a
 * @param b b
 * @param x x
 * @param y y
 * @return a 和 b 的最大公因數
 * 備註: x, y 是指標喔 之後得到的一組解會存在裡面
 */
int exgcd(int a, int b, long long &x, long long &y) {
    if (b == 0) {
        x = 1, y = 0;
        return a;
    }
    int now = exgcd(b, a % b, y, x);
    y -= a / b * x;
    return now;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    long long x, y;
    while (cin >> a >> b) {
        int d = exgcd(a, b, x, y);
        cout << x << ' ' << y << ' ' << d << '\n';
    }

    return 0;
}
