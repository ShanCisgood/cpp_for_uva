#include <bits/stdc++.h>
using namespace std;

int generator(int n) {
    n *= n;
    vector<int> nums;
    while (n)
        nums.push_back(n % 10), n /= 10;

    while (nums.size() < 8)
        nums.push_back(0);
    reverse(nums.begin(), nums.end());

    int ret = 0;
    for (int i = 2; i <= 5; i++)
        ret = ret * 10 + nums[i];

    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while (cin >> n && n) {
        long long cnt = 0;
        bool visited[10005] = {0};
        while (!visited[n]) {
            visited[n] = true;
            n = generator(n);
            cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}
