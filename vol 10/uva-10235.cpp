#include <bits/stdc++.h>
#define MAXN 1000005
using namespace std;
bool primes[MAXN];
void init() {
    for (int i = 0; i < MAXN; i++)
        primes[i] = true;
    primes[0] = primes[1] = false;
    for (int i = 2; i < MAXN; i++)
        if (primes[i])
            for (int j = i + i; j < MAXN; j += i)
                primes[j] = false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    init();
    int n;
    while (cin >> n) {
        int tmp = n, re = 0;
        while (tmp) {
            re = re * 10 + tmp % 10;
            tmp /= 10;
        }
        if (!primes[n])
            cout << n << " is not prime.\n";
        else if ((primes[n] && (!primes[re] || n == re)))
            cout << n << " is prime.\n";
        else
            cout << n << " is emirp.\n";
    }

    return 0;
}
