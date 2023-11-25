#include <bits/stdc++.h>
using namespace std;
int to_decimal(string s) {
    int num = 0;
    for (int i = 0; i < s.length(); i++)
        num = (num << 1) + (s[i] - '0');
    return num;
}
int gcd(int a, int b) {
    while ((a %= b) && (b %= a)) {}
    return a + b;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s1, s2;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s1 >> s2;
        int num1 = to_decimal(s1), num2 = to_decimal(s2);
        int d = gcd(num1, num2) - 1;
        cout << "Pair #" << i << ": " << (!d ? "Love is not all you need!\n" : "All you need is love!\n");
    }

    return 0;
}
