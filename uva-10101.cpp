#include <bits/stdc++.h>
#define ll long long
using namespace std;
void num_convert(ll n) {
    if (n >= 10000000) {
        num_convert(n / 10000000);
        cout << " kuti";
        n %= 10000000;
    }
    if (n >= 100000) {
        num_convert(n / 100000);
        cout << " lakh";
        n %= 100000;
    }
    if (n >= 1000) {
        num_convert(n / 1000);
        cout << " hajar";
        n %= 1000;
    }
    if (n >= 100) {
        num_convert(n / 100);
        cout << " shata";
        n %= 100;
    }
    if (n)
        cout << " " << n;
}
int main() {
    ll n, c = 1;
    while (cin >> n) {
        cout << setw(4) << c++ << ".";
        if (n) {
            num_convert(n);
        }
        else {
            cout << " 0";
        }
        cout << endl;
    }
}
