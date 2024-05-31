#include <bits/stdc++.h>
#define pdd pair<double, double>
#define y second
#define x first
using namespace std;

const int MAXN = 1005;

double dist(pdd a, pdd b) {
    double sq = (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
    return sq;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    pdd gopher, dog, hole[MAXN];
    while (cin >> n >> gopher.x >> gopher.y >> dog.x >> dog.y) {
        bool can = false;
        int ans_idx = 0;
        for (int i = 0; i < n; i++) {
            cin >> hole[i].x >> hole[i].y;
            if (!can && dist(hole[i], gopher) * 4 <= dist(hole[i], dog)) {
                can = true;
                ans_idx = i;
            }
        }
        if (can)
            cout << fixed << setprecision(3) << "The gopher can escape through the hole at " << "(" << hole[ans_idx].x
                 << "," << hole[ans_idx].y << ").\n";
        else
            cout << "The gopher cannot escape.\n";
    }

    return 0;
}
