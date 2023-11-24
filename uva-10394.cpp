#include <bits/stdc++.h>
using namespace std;
const int MAXN = 20000000;
bool prime[MAXN];
vector<int> v;
void init() {
    prime[0] = prime[1] = true;
    for (int i = 2; i * i < MAXN; i++)
        if (!prime[i])
            for (int j = i * i; j < MAXN; j += i)
                prime[j] = true;
    // cout << "<<<<<<\n";
    for (int i = 2; i < MAXN - 2; i++)
        if (!(prime[i] || prime[i + 2]))
            v.push_back(i);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    init();
    int n;
    while (cin >> n)
        cout << '(' << v[n - 1] << ", " << v[n - 1] + 2 << ")\n";

    return 0;
}
