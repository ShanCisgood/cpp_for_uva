#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    pair<double, double> ep[4], vec[3], ans;
    while (cin >> ep[0].x >> ep[0].y) {
        for (int i = 1; i < 4; i++)
            cin >> ep[i].x >> ep[i].y;

        if (ep[1] != ep[2]) {
            if (ep[0] == ep[3])
                swap(ep[0], ep[1]), swap(ep[2], ep[3]);
            else if (ep[0] == ep[2])
                swap(ep[0], ep[1]);
            else if (ep[1] == ep[3])
                swap(ep[2], ep[3]);
        }

        vec[1].x = ep[0].x - ep[1].x;
        vec[1].y = ep[0].y - ep[1].y;
        vec[2].x = ep[3].x - ep[2].x;
        vec[2].y = ep[3].y - ep[2].y;

        ans.x = ep[1].x + vec[1].x + vec[2].x;
        ans.y = ep[1].y + vec[1].y + vec[2].y;

        cout << fixed << setprecision(3) << ans.x << ' ' << ans.y << '\n';
    }

    return 0;
}
