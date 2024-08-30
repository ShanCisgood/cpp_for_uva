#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    vector<long long> vec(3);
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ": ";
        for (int j = 0; j < 3; j++)
            cin >> vec[j];
        sort(vec.begin(), vec.end());
        if (vec[0] + vec[1] <= vec[2] || vec[0] < 0) {
            cout << "Invalid\n";
            continue;
        }
        if (vec[0] == vec[1] && vec[1] == vec[2])
            cout << "Equilateral\n";
        else if (vec[0] == vec[1] || vec[1] == vec[2])
            cout << "Isosceles\n";
        else
            cout << "Scalene\n";
    }

    return 0;
}
