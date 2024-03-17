#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fib[100] = {1, 1};

void init() {
    for (int i = 2; i < 100; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    init();

    int n;
    while (cin >> n && n)
        cout << fib[n] << '\n';

    return 0;
}
