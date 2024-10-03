#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e4 + 5;
bool is_prime[N];  // 0: is prime, 1: not prime
vector<int> primes;
ll cnt[N];

void init() {
    is_prime[0] = is_prime[1] = true;
    for (int i = 2; i < N; i++) {
        if (is_prime[i])
            continue;
        primes.push_back(i);
        for (int j = i * i; j < N; j += i)
            is_prime[j] = true;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    init();
    int n;
    while (cin >> n && n) {
        int cnt = 0;
        for (int i = 0; primes[i] <= n; i++) {
            int sum = 0;
            for (int j = i; sum < n; j++) {
                sum += primes[j];
                if (sum == n) {
                    cnt++;
                    break;
                }
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}