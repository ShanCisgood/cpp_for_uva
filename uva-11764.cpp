#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int _case = 1; _case <= t; _case++) {
        int n, wall, pre = 0, high = 0, low = 0;
        bool isTrue = false;
        cin >> n;
        while (n--) {
            cin >> wall;
            if (isTrue) {
                if (wall > pre)
                    high++;
                else if (wall < pre)
                    low++;
            }
            isTrue = true;
            pre = wall;
        }
        cout << "Case " << _case << ": " << high << " " << low << '\n';
    }

    return 0;
}
